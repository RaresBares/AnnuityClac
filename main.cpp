#include <iostream>

int main() {


    std::cout << "Whats the Interest?" << std::endl;
    double_t interest;
    std::cin >> interest ;
    std::cout << "Whats the size of your credit?" << std::endl;
    int credit;
    std::cin >> credit;
    std::cout << "For how many years are you paying?" << std::endl;
    int years;
    std::cin >> years;
    std::cout << "credit" << " | " << "repayment" << " | " "interest" << " | " << "annuity"<< std::endl;
    {
        double_t T1 = credit/years;
        for(int i = 1; i <= years; i++){
                double_t z = credit * interest;
                credit -= T1;
                double_t annuity = z+T1;
            std::cout << credit << " | " << T1 << " | " << z << " | " << annuity<< std::endl;
        }

    }

}
