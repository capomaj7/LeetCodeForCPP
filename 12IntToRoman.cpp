#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        if(num>3999) return "";
        map<int,string>flagToRomanStringMap;
        flagToRomanStringMap[4]="IV";
        flagToRomanStringMap[9]="IX";
        flagToRomanStringMap[40]="XL";
        flagToRomanStringMap[90]="XC";
        flagToRomanStringMap[400]="CD";
        flagToRomanStringMap[900]="CM";
        flagToRomanStringMap[1]="I";
        flagToRomanStringMap[5]="V";
        flagToRomanStringMap[10]="X";
        flagToRomanStringMap[50]="L";
        flagToRomanStringMap[100]="C";
        flagToRomanStringMap[500]="D";
        flagToRomanStringMap[1000]="M";
        int thousandbit=num/1000;
        int hundredBit=(num/100)%10;
        int decadeNum=(num/10)%10;
        int bit=num%10;
        string resultStr="";
        if(thousandbit!=0){
            for(int i=0;i<thousandbit;i++){
                resultStr +=flagToRomanStringMap[1000];
            }
        }
        if(hundredBit!=0){
            if(hundredBit==9||hundredBit==4){
                int flag=hundredBit*100;
                resultStr+=flagToRomanStringMap[flag];
            }else{
                if(hundredBit>4){
                    resultStr+="D";
                    for(int i=0;i<hundredBit-5;i++){
                        resultStr+=flagToRomanStringMap[100];
                    }
                }else{
                    for(int i=0;i<hundredBit;i++){
                            resultStr+=flagToRomanStringMap[100];
                        }
                }
            }

        }
        if(decadeNum!=0){
            if(decadeNum==9||decadeNum==4){
                int flag=decadeNum*10;
                resultStr+=flagToRomanStringMap[flag];
            }else{
                if(decadeNum>4){
                    resultStr+="L";
                    for(int i=0;i<decadeNum-5;i++){
                        resultStr+=flagToRomanStringMap[10];
                    }
                }else{
                    for(int i=0;i<decadeNum;i++){
                            resultStr+=flagToRomanStringMap[10];
                        }
                }
            }
        }
        if(bit!=0){
            if(bit==9||bit==4){
                resultStr+=flagToRomanStringMap[bit];
            }else{
                if(bit>4){
                    resultStr+="V";
                    for(int i=0;i<bit-5;i++){
                        resultStr+=flagToRomanStringMap[1];
                    }
                }else{
                    for(int i=0;i<bit;i++){
                            resultStr+=flagToRomanStringMap[1];
                    }
                }
            }

        }
        return resultStr;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    string ss=s.intToRoman(1994);
    cout<<ss<<endl;
    return 0;
}