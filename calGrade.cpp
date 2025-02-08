#include <iostream>
#include <iomanip>
using namespace std;
class Score {
    public:
    float mid, collect, final,score;
    
    void setGrade(float sum){
        score = sum;
        cout<<"Score is "<<score<<endl;
        if (score >= 80){
            cout<<"Grade A"<<endl;
        }
        else if (score >= 70 and score <80){
            cout<<"Grade B"<<endl;
        }
        else if (score >= 60 and score <70){
            cout<<"Grade C"<<endl;
        }
        else if (score >= 50 and score <60){
            cout<<"Grade D"<<endl;
        }
        else if (score <50){
            cout<<"Grade F"<<endl;
        }
        
    }
};
        
class Totalscore : public Score  {
    public:
    float sum;
    float setSore(int num1,int num2 ,int num3){
                collect = num1;  mid = num2 ,final = num3;
                sum = collect+mid+final;
                return(sum);
            }
} ;    

class Calculate : public Totalscore {
            public:
            int  mids,cols,fis;
            float collect_point,mid_point,final_point;
            int getPoint1(int num1){
                collect_point = 0.2;
                
                
                cols = num1*collect_point;
                return(cols);
            }
                
            int getPoint2(int num2){
                
                mid_point = 0.4;
                
                mids = num2*mid_point;
                return(mids);
            }    
            
            int getPoint3(int num3){
                
                final_point = 0.4;
                
                fis = num3*final_point;
                return(fis);
            }  
            
            
                
};
    

int main(){   
            Calculate std;
            
            int S_collect,S_mid,S_final,S_score,num1,num2,num3,select;
            cout<<"\tCalculate Grade"<<endl;
            
        while (true){    
            cout<<"\n1.continue \n0.Stop"<<endl;
            cout<<"Select : ";cin>>select;
            if (select==1){
            cout<<"\nTotal collect out of 100 Get = ";cin>>num1;
            cout<<"Midterm Out of 100 Get = ";cin>>num2;
            cout<<"Final Out of 100 Get = ";cin>>num3;
            S_collect= std.getPoint1(num1);
            S_mid= std.getPoint2(num2);
            S_final= std.getPoint3(num3);
            S_score = std.setSore(S_collect,S_mid,S_final);
            std.setGrade(S_score);
            }
            else if (select==0){
                break;
            }
            else cout<<"เลือกใหม่"<<endl;
        }
}
