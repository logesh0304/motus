#include<iostream>
#include<netinet/in.h>
#include<sys/socket.h>

#define HOST  ;
#define PORT 8080;

using namespace std;

void startsrever();
int degtocoord(int deg, int max_limit, int half_dim);
int getsensorvalues();
int localize_azimuth(int azimuth);
int close();
void notify(char* msg);

int main(){

}

void startserver(){
    
}
int degtocoord(int deg, int max_limit, int half_dim){
    deg = abs(deg)<max_limit ? deg : max_limit;
    return half_dim + ((deg / max_limit) * half_dim);
}

int getsensorvalues(){

}

int localize_azimuth(int azimuth){
    if azimuth > 270.0 and azimuth < 360.0:
        azimuth = azimuth - 360.0
    return azimuth
}
