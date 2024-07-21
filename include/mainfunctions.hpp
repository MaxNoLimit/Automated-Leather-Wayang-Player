#ifndef MAINFUNCTIONS_H
#define MAINFUNCTIONS_H

// #include <CheapStepper.h>

void beginingAllGPIOS();
namespace WayangDisplay
{
    void lcd2004setup();
    void lcd2004loop();
    void generalLoop();
};

namespace WayangDisplayController
{
    void spinRotaryEncoder();
    void pressRotaryEncoder();
};

namespace WayangHorizontalControl
{
    void wayang1(int distance);
    void wayang2(int distance);
    void wayang3(int distance);
    void wayang4(int distance);
    void wayang5(int distance);
    void wayang6(int distance);
    void wayang7(int distance);
    void wayang8(int distance);
    void wayang9(int distance);
    void wayang10(int distance);
};

enum whatSideServo
{
    RIGHT = 0,
    LEFT = 1,
};

class WayangHandServo
{
public:
    enum whatSideServo
    {
        LEFT = 0,
        RIGHT = 1
    };
    WayangHandServo(int leftOrRight);
    virtual ~WayangHandServo();
    void defaultPosition();
    void moveWhatServo(int servoNumber, int degree);

    void setServoPin1(int pin);
    void setServoPin2(int pin);
    void setServoPin3(int pin);
    void setServoPin4(int pin);

    int getServoPin1();
    int getServoPin2();
    int getServoPin3();
    int getServoPin4();

    int getAmountOfWaves();
    int getWavePeriod();
    int degreeToDelay(int degree);

private:
    const int wavePeriod = 20000; // in microseconds
    const int amountOfWaves = 100;
    int servoPin1;
    int servoPin2;
    int servoPin3;
    int servoPin4;
};

#endif // MAINFUNCTIONS_H