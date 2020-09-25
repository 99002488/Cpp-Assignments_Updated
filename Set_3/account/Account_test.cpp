#include "account.h"
#include"savingsaccount.h"
#include"creditaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *a1=new SavingsAccount("1AF","Shweta",10000);
    a1->debit(2000);
    a1->credit(4000);
    EXPECT_EQ(12000,a1->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *a2=new CreditAccount("2AF","Tejasvi",7000);
    a2->debit(3000);
    a2->credit(1000);
    EXPECT_EQ(5000,a2->getBalance());
}
