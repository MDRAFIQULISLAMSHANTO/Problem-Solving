#include<iostream>
int main(){
    int n, k; // n= number of problem , k = time take to go to the party
    std::cin>> n>>k;
    int timeTaken = 0;
    int totalTime = 240 - k;
    int solvedProblem = 0;
    if (n >= 1 && n<= 10 && k >= 1 && k <=240)
    {
        for (int i = 1; i <= n; i++)
        {
            timeTaken += 5*i;
            if (timeTaken > totalTime)
            {
                break;
            }
            solvedProblem++;


        }
        std::cout<< solvedProblem;



    } else{
        std::cout<<"Error!";

    }


    return 0 ;
}