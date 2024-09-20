#include "characters/rama_wijaya.hpp"
#include "a4988_nema.hpp"
#include "distanceSensorVL53L0X.hpp"

WayangHandServo Servo_RamaWijaya(whatSideServo::LEFT);
HorizontalController HC_rama_wijaya;

void RamaWijaya::defaultStandPosition()
{
    walk_to_a_certain_distance_before_calibrating_value(41);
}

void RamaWijaya::defaultHandPosition()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.defaultPosition();
    // Servo_RamaWijaya.moveWhatServo(2, 60, 2000);
    // Servo_RamaWijaya.moveWhatServo(4, 60, 2000);
    downBack();
    onHipBack();
    Servo_RamaWijaya.resetArray();
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::walk_to_scene(int distanceValue)
{
    HC_rama_wijaya.step_for_n_dir(3, distanceValue, "ccw");
}

void RamaWijaya::leave_from_scene(int distanceValue)
{
    HC_rama_wijaya.step_for_n_dir(3, distanceValue, "cw");
}

void RamaWijaya::hand_movement_test_1()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    // Servo_RamaWijaya.moveWhatServo(1, 0);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(2, 0);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(3, 180);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(4, 180);
    // delay(1000);
    // Servo_RamaWijaya.moveWhatServo(1, 180);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(2, 180);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(3, 0);
    // delay(10);
    // Servo_RamaWijaya.moveWhatServo(4, 0);
    // delay(1000);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::hand_movement_test_2()
{
}

void RamaWijaya::hand_movement_test_3()
{
}

void RamaWijaya::hand_movement_test_4()
{
}

void RamaWijaya::talking(int delay_in_sec)
{
    // digitalWrite(WAYANG_HAND_1, HIGH);
    // for (int i = 0; i < (delay_in_sec * 1000000 / 4998272) - 1; i++)
    // {
    //     rama_wijaya_stepper.rightHandSpin("ccw", 90);
    //     rama_wijaya_stepper.rightHandSpin("cw", 90);
    //     delay(2000);
    // }
    // rama_wijaya_stepper.stopAllStepper();
    // digitalWrite(WAYANG_HAND_1, LOW);
}

void RamaWijaya::right_moveHandBackAbit()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(4, 120, 2000);
    Servo_RamaWijaya.moveWhatServo(3, 90, 2000);
    Servo_RamaWijaya.moveWhatServo(4, 135, 2000);
    Servo_RamaWijaya.moveWhatServo(3, 120, 2000);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::right_handOnHip()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.defaultPosition();
    Servo_RamaWijaya.moveWhatServo(4, 60, 2000);
    Servo_RamaWijaya.moveWhatServo(3, 90, 2000);
    Servo_RamaWijaya.moveWhatServo(4, 90, 2000);
    // Servo_RamaWijaya.moveWhatServo(4, 70, 2500);
    // Servo_RamaWijaya.moveWhatServo(3, 80, 2500);
    // Servo_RamaWijaya.moveWhatServo(4, 50, 2500);
    // Servo_RamaWijaya.moveWhatServo(3, 100, 2500);
    // Servo_RamaWijaya.moveWhatServo(4, 90, 2500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::left_pointToFront()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.defaultPosition();
    Servo_RamaWijaya.moveWhatServo(1, 0, 3000);
    Servo_RamaWijaya.moveWhatServo(2, 50, 2000);
    // Servo_RamaWijaya.moveWhatServo(1, 90, 3000);
    // Servo_RamaWijaya.moveWhatServo(2, 60, 3000);
    // Servo_RamaWijaya.moveWhatServo(1, 0, 3000);
    // Servo_RamaWijaya.moveWhatServo(2, 55, 3000);

    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::left_pointToSelf()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.defaultPosition();
    Servo_RamaWijaya.moveWhatServo(2, 120, 2000);
    Servo_RamaWijaya.moveWhatServo(1, 0, 2000);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::walk_to_a_certain_distance(int desiredDistance)
{
    if (!getSensorStatus(3))
    {
        beginSensor3();
    }
    // desiredDistance = desiredDistance + (float)desiredDistance * 0.093;
    // Serial.println("\ndesiredDistance: ");
    // Serial.print(desiredDistance);
    // Serial.println("mm \n");
    int readValue = getDistanceSensor3();
    if (readValue > 1000)
    {
        readValue = 800;
    }

    Serial.println("readValue 1: ");
    Serial.print(readValue);
    Serial.println("mm \n");
    float difference = readValue - desiredDistance;
    Serial.print(difference);
    Serial.println("mm \n");
    if (difference > 0)
    {
        // difference = difference + 10;
        float result = difference / 0.3;
        int result_int = (int)result + 1;
        Serial.print(result_int);
        Serial.println(" steps\n");
        leave_from_scene(result_int);
        Serial.println("readValue 2: ");
        int finalReadValue = getDistanceSensor3();
        Serial.print(finalReadValue);
        Serial.println("mm \n");
        if (finalReadValue > desiredDistance * 1.1)
        {
            walk_to_a_certain_distance(desiredDistance);
        }
    }
    else if (difference < 0)

    {
        // difference = difference - 10;
        float result = difference / 0.3;
        int result_int = (int)result - 1;
        Serial.print(result_int);
        Serial.println(" steps\n");
        result_int = abs(result_int);
        walk_to_scene(result_int);
        Serial.println("readValue 3: ");
        int finalReadValue = getDistanceSensor3();
        Serial.print(finalReadValue);
        Serial.println("mm \n");
        if (finalReadValue < desiredDistance * 0.9)
        {
            walk_to_a_certain_distance(desiredDistance);
        }
    }
    else
    {
    }
}

void RamaWijaya::walk_to_a_certain_distance_before_calibrating_value(int desiredDistance)
{
    int desiredDistanceAfterCalibratingValue = desiredDistance + (float)desiredDistance * (0.025);
    Serial.println("\ndesiredDistance: ");
    Serial.print(desiredDistanceAfterCalibratingValue);
    Serial.println("mm \n");
    walk_to_a_certain_distance(desiredDistanceAfterCalibratingValue);
}

void RamaWijaya::pointToFront()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    // Servo_RamaWijaya.resetArray();
    // Servo_RamaWijaya.moveWhatServo(2, 70, 500);
    Servo_RamaWijaya.moveWhatServo(1, 30, 500); // this is to avoid resetArray bug that skip servo1 to 0 deg or move to highest position
    Servo_RamaWijaya.moveWhatServo(1, 0, 2000);
    Servo_RamaWijaya.moveWhatServo(2, 50, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::lower_pointToFront()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(1, 100, 800);
    Servo_RamaWijaya.moveWhatServo(2, 50, 800);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::middleFront()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(2, 80, 500);
    Servo_RamaWijaya.moveWhatServo(1, 30, 2000);
    Servo_RamaWijaya.moveWhatServo(1, 0, 2000);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::downFront()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(1, 180, 1000);
    Servo_RamaWijaya.moveWhatServo(2, 90, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::pointToBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(3, 90, 1000);
    Servo_RamaWijaya.moveWhatServo(4, 120, 500);
    Servo_RamaWijaya.moveWhatServo(3, 180, 2000);
    Servo_RamaWijaya.moveWhatServo(4, 140, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::downBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(3, 20, 1000);
    Servo_RamaWijaya.moveWhatServo(4, 80, 700);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::onHipBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(4, 60 + 10, 500);
    Servo_RamaWijaya.moveWhatServo(3, 110, 2000);
    Servo_RamaWijaya.moveWhatServo(4, 80, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::pointToSelf()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.defaultPosition();
    Servo_RamaWijaya.moveWhatServo(2, 140, 500);
    Servo_RamaWijaya.moveWhatServo(1, 22, 2000);
    Servo_RamaWijaya.moveWhatServo(2, 120, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::middleFrontBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    // downBack();
    // onHipBack();
    // defaultHandPosition();
    Servo_RamaWijaya.moveWhatServo(3, 30, 1000);
    Servo_RamaWijaya.moveWhatServo(4, 60, 500);
    Servo_RamaWijaya.moveWhatServo(3, 125, 2000);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::lowPointToBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(3, 90, 1000);
    Servo_RamaWijaya.moveWhatServo(4, 120, 500);
    // Servo_RamaWijaya.moveWhatServo(3, 180, 2000);
    // Servo_RamaWijaya.moveWhatServo(4, 150, 500);
    digitalWrite(WAYANG_HAND_3, LOW);
}

void RamaWijaya::middleBack()
{
    digitalWrite(WAYANG_HAND_3, HIGH);
    Servo_RamaWijaya.moveWhatServo(3, 90, 1000);
    Servo_RamaWijaya.moveWhatServo(4, 100, 500);
    Servo_RamaWijaya.moveWhatServo(3, 180, 2000);
    digitalWrite(WAYANG_HAND_3, LOW);
}