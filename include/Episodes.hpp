#ifndef EPISODES_H
#define EPISODES_H

#include <Arduino.h>
#include <mainheader.hpp>
#define fighting_STACK_SIZE 256 * 2 // already maximum, cannot exceed anymore

namespace Episodes
{
    void Episode_1();
    void Episode_2();
    void Episode_3();
    void Episode_4();
    void Episode_5();

    // static void sugriwaTaskFight1(void *pvParameters);
    // // void sugriwaTaskFight2(void *pvParameters);

    // static void subaliTaskFight1(void *pvParameters);
    // static void subaliTaskFight2(void *pvParamaters);

    // static void ramaTaskFight1(void *pvParameters);

    // void Episode_1_task(void *pvParameters);
    // void Episode_2_task(void *pvParameters);
    // void Episode_3_task(void *pvParameters);
    // void Episode_4_task(void *pvParameters);
    // void Episode_5_task(void *pvParameters);

    // void forceQuit();

};

// extern TaskHandle_t episode1TaskHandler;
// extern TaskHandle_t episode2TaskHandler;
// extern TaskHandle_t episode3TaskHandler;
// extern TaskHandle_t episode4TaskHandler;
// extern TaskHandle_t episode5TaskHandler;

// void forceStopTask(void *pvParameters);


#endif // EPISODES_H