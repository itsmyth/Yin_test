#include <iostream>
#define PI 3.147
#include <math.h>
#include "Yin.h"

using namespace std;

int main()
{
    unsigned int i;
    int sampleRate=200;
    int bufferSize=50;
    Yin yin;
    float x, pitch, prob, buffer[96];
    yin.initialize(sampleRate,bufferSize);
    for(i=0;i<bufferSize;i++)
    {
        x=4*sin(0.1*PI*i);
        buffer[i]=x;
        cout<< x << endl;
    }

    pitch=yin.getPitch(buffer);
    prob=yin.getProbability();
    //prob=yin.getProbability();
    cout<<"Your pitch is "<<pitch<<" Hz\n";
    cout<<"Probability is "<<prob<<"\n";
    return 0;
}
