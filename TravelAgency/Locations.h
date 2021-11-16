#pragma once
#include<string>
#include<unordered_map>

struct Location {
    std::string name;
    Location* next;
    int id;
    int cost;
};

const int LOCATION_AMT = 7;

std::string locations[LOCATION_AMT] = { "Miami, USA", "California, USA", "Toronto, USA", "London, England", "Rio de Janeiro, Brazil", "Lagos, Nigeria", "Tokyo, Japan" };


//
//Location graph[LOCATION_AMT] = {
//    {"Miami, USA", &graph[0], 1, 800},
//    {}
//};

 