//this shit is not done
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;


int main(){
    string company1;
    string gpuSeries1;
    int generation1;
    char TIChar1;
    char SuperChar1;
    char XTChar1;
    char XTMChar1;
    char XTXChar1;

    string company2;
    string gpuSeries2;
    int generation2;
    char TIChar2;
    char SuperChar2;
    char XTChar2;
    char XTMChar2;
    char XTXChar2;

    int vram1;
    int vram2;
    string memoryGen1;
    string memoryGen2;
    int gpuClock1;
    int gpuClock2;
    int gpuBoostClock1;
    int gpuBoostClock2;
    int memClock1;
    int memClock2;
    int memGen1;
    int memGen2;
    int cores1;
    int cores2;
    int priceNew1;
    int priceNew2;
    int priceUsed1;
    int priceUsed2;
    
    bool isRunning = true;
    
    while (isRunning == true){
        cout << "What company is it?: ";
        cin >> company1;
        system("cls");

        cout << "What series is it?: ";
        cin >> gpuSeries1;
        system("cls");

        cout << "What Series is it? (900/1000/1600 etc..): ";
        cin >> generation1;
        system("cls");

        if (company1 == "nvidia" || company1 == "NVIDIA"){
            while(1 == 1){
                if (gpuSeries1 == "GT"){
                    if (generation1 == 1030){
                        vram1 = 2;
                        cores1 = 384;
                        gpuClock1 = 1227;
                        gpuBoostClock1 = 1468;
                        memoryGen1 = "GDDR5/DDR3";
                        priceNew1 = 90;
                        priceUsed1 = 60;
                    }  
                    else if (generation1 == 730){
                        vram1 = 1;
                        cores1 = 288;
                        gpuClock1 = 902;
                        gpuBoostClock1 = NULL;
                        memoryGen1 = "DDR3";
                        priceNew1 = 70;
                        priceUsed1 = 40;
                    }
                    else if (generation1 == 710){
                        vram1 = 1;
                        cores1 = 192;
                        gpuClock1 = 954;
                        gpuBoostClock1 = NULL;
                        memoryGen1 = "GDDR5/DDR3";
                        priceNew1 = 50;
                        priceUsed1 = 25;
                    }
                    else if (generation1 == 640){
                        vram1 = 1;
                        cores1 = 384;
                        gpuClock1 = 900;
                        gpuBoostClock1 = NULL;
                        memoryGen1 = "GDDR5/DDR3";
                        priceNew1 = NULL;
                        priceUsed1 = 40;
                    }
                    else if (generation1 == 620){
                        vram1 = 1;
                        cores1 = 96;
                        gpuClock1 = 700;
                        gpuBoostClock1 = NULL;
                        memoryGen1 = "DDR3";
                        priceNew1 = NULL;
                        priceUsed1 = 30;
                    }
                    else if (generation1 == 610){
                        vram1 = 1;
                        cores1 = 48;
                        gpuClock1 = 810;
                        gpuBoostClock1 = NULL;
                        memoryGen1 = "DDR3";
                        priceNew1 = NULL;
                        priceUsed1 = 20;
                    }
                    else {
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
            }
            }
            else if(gpuSeries1 == "GTX"){
                while (1 == 1){
                    if (generation1 == 1050){
                        cout << "Is it a 1050 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){
                            vram1 = 4;
                            cores1 = 768;
                            gpuClock1 = 1290;
                            gpuBoostClock1 = 1392;
                            memoryGen1 = "GDDR5";
                            priceNew1 = 175;
                            priceUsed1 = 125;
                        }
                        else if(TIChar1 == 'n'){
                            vram1 = 2;
                            cores1 = 640;
                            gpuClock1 = 1354;
                            gpuBoostClock1 = 1455;
                            memoryGen1 = "GDDR5";
                            priceNew1 = 135;
                            priceUsed1 = 95;
                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 1060){
                        vram1 = 6;
                        cores1 = 1280;
                        gpuClock1 = 1506;
                        gpuBoostClock1 = 1708;
                        memoryGen1 = "GDDR5";
                        priceNew1 = 250;
                        priceUsed1 = 200;
                    }
                    else if(generation1 == 1070){
                        vram1 = 8;
                        cores1 = 2432;
                        gpuClock1 = 1607;
                        gpuBoostClock1 = 1683;
                        memoryGen1 = "GDDR5";
                        priceNew1 = 450;
                        priceUsed1 = 350;
                    }
                    else if(generation1 == 1080){
                        cout << "Is it a 1080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){
                            vram1 = 11;
                            cores1 = 3584;
                            gpuClock1 = 1480;
                            gpuBoostClock1 = 1582;
                            memoryGen1 = "GDDR5X";
                            priceNew1 = 750;
                            priceUsed1 = 550;
                        }
                        else if(TIChar1 == 'n'){
                            vram1 = 8;
                            cores1 = 2560;
                            gpuClock1 = 1607;
                            gpuBoostClock1 = 1733;
                            memoryGen1 = "GDDR5X";
                            priceNew1 = 550;
                            priceUsed1 = 400;
                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 1650){
                        cout << "Is it a 1650 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){
                            vram1 = 4;
                            cores1 = 1280;
                            gpuClock1 = 1530;
                            gpuBoostClock1 = 1725;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 225;
                            priceUsed1 = 175;
                        }
                        else if(SuperChar1 == 'n'){
                            vram1 = 4;
                            cores1 = 896;
                            gpuClock1 = 1485;
                            gpuBoostClock1 = 1665;
                            memoryGen1 = "GDDR5";
                            priceNew1 = 175;
                            priceUsed1 = 125;
                        }
                        else{
                            cout << "ERROR: Invalid answer";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 1660){
                        cout << "Is it a 1660 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){
                            vram1 = 6;
                            cores1 = 1536;
                            gpuClock1 = 1500;
                            gpuBoostClock1 = 1770;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 275;
                            priceUsed1 = 225;
                        }
                        else if(TIChar1 == 'n'){
                            vram1 = 6;
                            cores1 = 1408;
                            gpuClock1 = 1530;
                            gpuBoostClock1 = 1785;
                            memoryGen1 = "GDDR5";
                            priceNew1 = 275;
                            priceUsed1 = 225;
                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }

                        cout << "Is it a 1660 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){
                            vram1 = 6;
                            cores1 = 1408;
                            gpuClock1 = 1530;
                            gpuBoostClock1 = 1785;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 250;
                            priceUsed1 = 200;
                        }
                        else if(SuperChar1 == 'n'){
                            vram1 = 6;
                            cores1 = 1408;
                            gpuClock1 = 1530;
                            gpuBoostClock1 = 1785;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 275;
                            priceUsed1 = 225;
                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                }
            }
            else if(gpuSeries1 == "RTX"){
                while(1 == 1){
                    if(generation1 == 2060){
                        cout << "Is it a 2060 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){
                            vram1 = 8;
                            cores1 = 2176;
                            gpuClock1 = 1470;
                            gpuBoostClock1 = 1650;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 400;
                            priceUsed1 = 300;
                        }   
                        else if(SuperChar1 == 'n'){
                            vram1 = 6;
                            cores1 = 1920;
                            gpuClock1 = 1365;
                            gpuBoostClock1 = 1680;
                            memoryGen1 = "GDDR6";
                            priceNew1 = 325;
                            priceUsed1 = 250;
                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 2070){
                        cout << "Is it a 2070 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){
                            
                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 2080){
                        cout << "Is it a 2080 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                        cout << "Is it a 2080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 3050){

                    }
                    else if(generation1 == 3060){
                        cout << "Is it a 3060 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 3070){
                        cout << "Is it a 3070 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 3080){
                        cout << "Is it a 3080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 3090){

                    }
                    else if(generation1 == 4050){

                    }
                    else if(generation1 == 4060){
                        cout << "Is it a 4060 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 4070){
                        cout << "Is it a 3070 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation1 == 4080){

                    }
                    else if(generation1 == 4090){

                    }
                }
            }
            else{
                cout << "ERROR: Invalid Series" << endl;
                system("pause>0");
                system("cls");
            }
        }
        else if(company1 == "amd" || company1 == "AMD"){
            if (gpuSeries1 == "RX"){
                if (generation1 == 5500){
                    cout << "Is it a 5500 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 5600){
                    cout << "Is it a 5600 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 5700){
                    cout << "Is it a 5700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                    cout << "Is it a 5700 XT? (y/n)";
                    cin >> XTMChar1;

                    if (XTMChar1 == 'y'){

                    }
                    else if(XTMChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 5800){
                    cout << "Is it a 5800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 5900){

                }
                else if (generation1 == 6500){
                    cout << "Is it a 6500 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 6600){
                    cout << "Is it a 6600 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 6700){
                    cout << "Is it a 6700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 6800){
                    cout << "Is it a 6800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 6900){
                    cout << "Is it a 6900 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 7600){

                }
                else if (generation1 == 7700){
                    cout << "Is it a 7700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 7800){
                    cout << "Is it a 7800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 7900){
                    cout << "Is it a 7900 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }

                    cout << "Is it a 5800 XTX? (y/n)";
                    cin >> XTXChar1;

                    if (XTXChar1 == 'y'){

                    }
                    else if(XTXChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 8600){

                }
                else if (generation1 == 8700){
                    cout << "Is it a 8700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 8800){
                    cout << "Is it a 8800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation1 == 8900){
                    cout << "Is it a 8900 XTX? (y/n)";
                    cin >> XTXChar1;

                    if (XTXChar1 == 'y'){

                    }
                    else if(XTXChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else {
                    cout << "ERROR: wrong generation1";
                    system("pause>0");
                    system("cls");
                }
            }
        }
        else if (company1 == "intel"){
            if (gpuSeries1 == "ARC"){
                if (generation1 == 380){

                }
                else if (generation1 == 580){

                }
                else if (generation1 == 750){

                }
                else if (generation1 == 770){

                }
                else if (generation1 == 510){

                }
                else if (generation1 == 730){

                }
                else if (generation1 == 780){

                }
            }
        }//! ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        cout << "What company is it? (other gpu): ";
        cin >> company2;
        system("cls");

        cout << "What series is it? (other gpu): ";
        cin >> gpuSeries2;
        system("cls");

        cout << "What Series is it? (900/1000/1600 etc..) (other gpu): ";
        cin >> generation2;
        system("cls");

        if (company2 == "nvidia" || company2 == "NVIDIA"){
            while(1 == 1){
                if (gpuSeries2 == "GT"){
                    if (generation2 == 1030){

                    }  
                    else if (generation2 == 730){

                    }
                    else if (generation2 == 710){

                    }
                    else if (generation2 == 640){

                    }
                    else if (generation2 == 620){

                    }
                    else if (generation2 == 610){

                    }
                    else {
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
            }
            }
            else if(gpuSeries2 == "GTX"){
                while (1 == 1){
                    if (generation2 == 1050){
                        cout << "Is it a 1050 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 1060){

                    }
                    else if(generation2 == 1070){
                        cout << "Is it a 1070 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 1080){
                        cout << "Is it a 1080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 1650){
                        cout << "Is it a 1650 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid answer";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 1660){
                        cout << "Is it a 1660 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }

                        cout << "Is it a 1660 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                }
            }
            else if(gpuSeries2 == "RTX"){
                while(1 == 1){
                    if(generation2 == 2060){
                        cout << "Is it a 2060 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 2070){
                        cout << "Is it a 2070 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 2080){
                        cout << "Is it a 2080 Super? (y/n)";
                        cin >> SuperChar1;

                        if (SuperChar1 == 'y'){

                        }
                        else if(SuperChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                        cout << "Is it a 2080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 3050){

                    }
                    else if(generation2 == 3060){
                        cout << "Is it a 3060 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 3070){
                        cout << "Is it a 3070 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 3080){
                        cout << "Is it a 3080 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 3090){

                    }
                    else if(generation2 == 4050){

                    }
                    else if(generation2 == 4060){
                        cout << "Is it a 4060 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 4070){
                        cout << "Is it a 3070 TI? (y/n)";
                        cin >> TIChar1;

                        if (TIChar1 == 'y'){

                        }
                        else if(TIChar1 == 'n'){

                        }
                        else{
                            cout << "ERROR: Invalid number";
                            system("pause>0");
                            system("cls");
                        }
                    }
                    else if(generation2 == 4080){

                    }
                    else if(generation2 == 4090){

                    }
                }
            }
            else{
                cout << "ERROR: Invalid Series" << endl;
                system("pause>0");
                system("cls");
            }
        }
        else if(company2 == "amd" || company2 == "AMD"){
            if (gpuSeries2 == "RX"){
                if (generation2 == 5500){
                    cout << "Is it a 5500 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 5600){
                    cout << "Is it a 5600 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 5700){
                    cout << "Is it a 5700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                    cout << "Is it a 5700 XT? (y/n)";
                    cin >> XTMChar1;

                    if (XTMChar1 == 'y'){

                    }
                    else if(XTMChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 5800){
                    cout << "Is it a 5800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 5900){

                }
                else if (generation2 == 6500){
                    cout << "Is it a 6500 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 6600){
                    cout << "Is it a 6600 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 6700){
                    cout << "Is it a 6700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 6800){
                    cout << "Is it a 6800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 6900){
                    cout << "Is it a 6900 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 7600){

                }
                else if (generation2 == 7700){
                    cout << "Is it a 7700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 7800){
                    cout << "Is it a 7800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 7900){
                    cout << "Is it a 7900 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }

                    cout << "Is it a 5800 XTX? (y/n)";
                    cin >> XTXChar1;

                    if (XTXChar1 == 'y'){

                    }
                    else if(XTXChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 8600){

                }
                else if (generation2 == 8700){
                    cout << "Is it a 8700 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 8800){
                    cout << "Is it a 8800 XT? (y/n)";
                    cin >> XTChar1;

                    if (XTChar1 == 'y'){

                    }
                    else if(XTChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else if (generation2 == 8900){
                    cout << "Is it a 8900 XTX? (y/n)";
                    cin >> XTXChar1;

                    if (XTXChar1 == 'y'){

                    }
                    else if(XTXChar1 == 'n'){

                    }
                    else{
                        cout << "ERROR: Invalid number";
                        system("pause>0");
                        system("cls");
                    }
                }
                else {
                    cout << "ERROR: wrong generation2";
                    system("pause>0");
                    system("cls");
                }
            }
        }
        else if (company2 == "intel"){
            if (gpuSeries2 == "ARC"){
                if (generation2 == 380){

                }
                else if (generation2 == 580){

                }
                else if (generation2 == 750){

                }
                else if (generation2 == 770){

                }
                else if (generation2 == 510){

                }
                else if (generation2 == 730){

                }
                else if (generation2 == 780){

                }
            }
        }
    }
}
