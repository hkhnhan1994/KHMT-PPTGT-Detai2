#include<iostream>
int main(){
    uint64_t songuyen=0;
    float sothuc=0.0;
    int count=1;
    while(true){
        songuyen++;
        sothuc++;
        if(songuyen!=sothuc){
            std::cout << "so nguyen:" <<songuyen<<" so thuc:"<<sothuc<< std::endl;
            sothuc+=count;
            count++;
            std::cout << "counter:" <<count<< std::endl;
        }
        else{
            count=1;
        }

    }
    
}