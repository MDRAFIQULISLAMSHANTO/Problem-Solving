#include<iostream>
#include<string>

/* std::string fixNumber(int a,char op, int b){
    if (a> b )
    {
        return std::to_string(a) + ">" + std::to_string(b);
    }else if (a < b)
    {
        return std::to_string(a) + "<" + std::to_string(b);
    }else {return std::to_string(a) + "=" + std::to_string(b);}



} */
/* std::string fixNumber(int a,char op, int b){
    if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b))
    {
        return std::to_string(a) + std::to_string(op) + std::to_string(b);
    }else{
        if (a> b )
    {
        return std::to_string(a) + ">" + std::to_string(b);
    }else if (a < b)
    {
        return std::to_string(a) + "<" + std::to_string(b);
    }else {return std::to_string(a) + "=" + std::to_string(b);}

    }
}

int main(){
    int totalNumber, a,b;
    char op;
    std::cin>> totalNumber;
    if (totalNumber >=0 && totalNumber <= 9)
    {
        for(int i=0; i<= totalNumber; i++){
            std::cin>>a>>op>>b;
           std::cout<< fixNumber(a,op,b)<< '\n';
        }

    }else std::cout<< "Enter the number from 0 to 9"<<'\n';

    return 0;


} */

std::string fixNumber(int t, std::string exp){
    std::string result;
    for (int i = 0; i < t; ++i) {

std::string s = exp[i];

char a = s[0], op = s[1], b = s[2];

if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b)) {

            /*  return std::to_string(s); */
            results.push_back(s);
        } else {
            // Fix the operator
            /* if (a < b) {
                results.push_back(string(1, a) + "<" + string(1, b));
            } else if (a > b) {
                results.push_back(string(1, a) + ">" + string(1, b));
            } else { // a == b
                results.push_back(string(1, a) + "=" + string(1, b));
            } */
          /*   if (a> b )
    {
        return std::to_string(a) + ">" + std::to_string(b);
    }else if (a < b)
    {
        return std::to_string(a) + "<" + std::to_string(b);
    }else {return std::to_string(a) + "=" + std::to_string(b);}

    }
        }
} */
 if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b)) {
            results.push_back(s);
        } else {
            // Fix the operator
            if (a < b) {
                results.push_back(string(1, a) + "<" + string(1, b));
            } else if (a > b) {
                results.push_back(string(1, a) + ">" + string(1, b));
            } else { // a == b
                results.push_back(string(1, a) + "=" + string(1, b));
            }
        }
    }
    }




int main(){
    int n;
    std::cin>>n;

    std::string exp = std::to_string(n) ;

    if (n >=0 && n <= 9)
    {
        for(int i=0; i<n; i++){
            std::cin>>exp[i];

           std::cout<< fixNumber(n,exp)<< '\n';

        }



    }else std::cout<< "Enter the number from 0 to 9"<<'\n';

    return 0;
}