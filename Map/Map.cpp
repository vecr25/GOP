//
// Created by vecr on 26/05/18.
//

#include <iostream>
#include <array>
#include <cmath>
#include "Map.h"
#include "../Utils/Effects.h"
#include "../Utils/Util.h"
#include "../Utils/Colors.h"
#include <iomanip>


Map::Map() {
    //this->dimensions=dimensions;
    int i, nEffects=Effects::numberOfEffects();
    int distanceBtwnEffects=8; //TODO Decidere ogni quante celle avere un effetto
    double dim = (double)dimensions;
    nColumns=trunc(dim/10);
   // int map[dimensions][2];

    for(i=0;i<dimensions;i++){
        if(i%distanceBtwnEffects==0) {
            map[i][1] =Util::randomFrom1(nEffects);
        } else{
            map[i][1]=0;
        }
        map[i][0]=0;
        std::cout<<i<<"- "<<map[i][1]<<std::endl;
    }
}

void Map::displayMap() {
    int i,j;
    Colors k;
    for(i=0;i<10;i++){
      //  std::cout<<k.kGreen<<"╔══════════════════════════════════════════════════════════════════╗"<<k.kStop<<std::endl;
        if(i!=0){
            std::cout<<"│" << i << " - " << map[i][1] << "\t" << i + 10 << " - " << map[i + 10][1] << "\t" << i + 20 << " - "
                    << map[i + 20][1] << "\t" << i + 30 << " - " << map[i + 30][1] <<"│"<< std::endl;
        }else {
            std::cout<<""<<"S - "<<map[i][1]<<"\t"<<i+10<<" - "<<map[i+10][1]<<"\t"<<i+20<<" - "<<map[i+20][1]<<"\t"<<i+30<<" - "<<map[i+30][1]<<"│"<<std::endl;
        }
    }
    std::cout<<"--------- FINE 40 "<<map[40][1]<<"---------"<<std::endl;
   // displayCell(30);
}

int Map::getCellEffect(int cellNumber) {
    return map[cellNumber][1];
}

void Map::displayCell(int cellNumber) {
    int i;

    for(i=0;i<10;i++){
        //std::cout << '\r'<<"┌────┬──────┐"<<std::endl;
        std::cout << "\r" << "DIO CANE";std::cout << "\r" << "DIO CANE";
    }

//    std::cout << '\r'
//              << std::setw(2) << std::setfill('0') << "┌────┬──────┐" << ':'
//              << std::setw(2) <<"│"<< ':'
//              << std::setw(2) << "3" << std::flush;
}

std::string Map::stringConstructor() {
    std::string initial[nColumns];
    std::string stringResources[]={
      "┌────┬──────┐",//0
      "└────┴──────┘"//1
    };

}
