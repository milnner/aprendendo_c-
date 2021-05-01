//Savings

class Savings
{
    public: 
        double deposit(double amount);
        unsigned int accountNumber;
        double balance;
};

double Savings::deposit(double amount)
{
    balance += amount;
    return balance;
}
