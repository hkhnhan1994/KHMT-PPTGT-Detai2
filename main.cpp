#include<iostream>
int main(){
    uint64_t songuyen=0;
    float sothuc=0.0;
    int count=1;
    int max=1;
    while(true){
        
        if(songuyen!=sothuc){
            sothuc=sothuc+float(count);
            count++;
            if(songuyen==sothuc){
                sothuc=float(songuyen);
                if (max<count)
                {
                max=count;
                std::cout << "counter:" <<count<< std::endl;
                std::cout << "so nguyen:" <<songuyen<<" so thuc:"<<sothuc<< std::endl;
                }
            }
            
        }
        else{
            songuyen++;
            sothuc++;
            count=1;
        }
    }
}