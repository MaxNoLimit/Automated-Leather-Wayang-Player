#ifndef STATE_MANAGEMENT_H
#define STATE_MANAGEMENT_H

#include <Arduino.h>

namespace StateManagement
{
    enum FSA_STATE
    {
        DEFAULT_LOOPING_LCD,
        CALIBRATING_ALL_NEMA,
        MP3_REINIT,

        WAYANG_HAND_CALIBRATION,

        SENSOR_CHECK,

        PLAY_EPISODE_1,
        PLAY_EPISODE_2,
        PLAY_EPISODE_3,
        PLAY_EPISODE_4,
        PLAY_EPISODE_5,
        SIMPLE_WAYANG_HAND_CALIBRATION,

        SITA_HAND,
        EXIT_SITA_HAND,
        SITA_POINT_TO_FRONT,
        SITA_LOW_POINT_TO_FRONT,
        SITA_MIDDLE_FRONT,
        SITA_DOWN_FRONT,
        SITA_POINT_TO_SELF,
        SITA_DOWN_BACK,
        SITA_ON_HIP_BACK,
        SITA_POINT_TO_BACK,
        SITA_LOW_POINT_TO_BACK,
        SITA_MIDDLE_BACK,

        RAHWANA_HAND,
        EXIT_RAHWANA_HAND,
        RAHWANA_POINT_TO_FRONT,
        RAHWANA_LOW_POINT_TO_FRONT,
        RAHWANA_MIDDLE_FRONT,
        RAHWANA_DOWN_FRONT,
        RAHWANA_POINT_TO_SELF,
        RAHWANA_DOWN_BACK,
        RAHWANA_ON_HIP_BACK,
        RAHWANA_POINT_TO_BACK,
        RAHWANA_LOW_POINT_TO_BACK,
        RAHWANA_MIDDLE_BACK,

        RAMA_WIJAYA_HAND,
        EXIT_RAMA_WIJAYA_HAND,
        RAMA_WIJAYA_POINT_TO_FRONT,
        RAMA_WIJAYA_LOW_POINT_TO_FRONT,
        RAMA_WIJAYA_MIDDLE_FRONT,
        RAMA_WIJAYA_DOWN_FRONT,
        RAMA_WIJAYA_POINT_TO_SELF,
        RAMA_WIJAYA_DOWN_BACK,
        RAMA_WIJAYA_ON_HIP_BACK,
        RAMA_WIJAYA_POINT_TO_BACK,
        RAMA_WIJAYA_LOW_POINT_TO_BACK,
        RAMA_WIJAYA_MIDDLE_BACK,

        HANOMAN_HAND,
        EXIT_HANOMAN_HAND,
        HANOMAN_POINT_TO_FRONT,
        HANOMAN_LOW_POINT_TO_FRONT,
        HANOMAN_MIDDLE_FRONT,
        HANOMAN_DOWN_FRONT,
        HANOMAN_POINT_TO_SELF,
        HANOMAN_DOWN_BACK,
        HANOMAN_ON_HIP_BACK,
        HANOMAN_POINT_TO_BACK,
        HANOMAN_LOW_POINT_TO_BACK,
        HANOMAN_MIDDLE_BACK,

        LAKSMANA_HAND,
        EXIT_LAKSMANA_HAND,
        LAKSMANA_POINT_TO_FRONT,
        LAKSMANA_LOW_POINT_TO_FRONT,
        LAKSMANA_MIDDLE_FRONT,
        LAKSMANA_DOWN_FRONT,
        LAKSMANA_POINT_TO_SELF,
        LAKSMANA_DOWN_BACK,
        LAKSMANA_ON_HIP_BACK,
        LAKSMANA_POINT_TO_BACK,
        LAKSMANA_LOW_POINT_TO_BACK,
        LAKSMANA_MIDDLE_BACK,

        SUGRIWA_HAND,
        EXIT_SUGRIWA_HAND,
        SUGRIWA_POINT_TO_FRONT,
        SUGRIWA_LOW_POINT_TO_FRONT,
        SUGRIWA_MIDDLE_FRONT,
        SUGRIWA_DOWN_FRONT,
        SUGRIWA_POINT_TO_SELF,
        SUGRIWA_DOWN_BACK,
        SUGRIWA_ON_HIP_BACK,
        SUGRIWA_POINT_TO_BACK,
        SUGRIWA_LOW_POINT_TO_BACK,
        SUGRIWA_MIDDLE_BACK,

        SUBALI_HAND,
        EXIT_SUBALI_HAND,
        SUBALI_POINT_TO_FRONT,
        SUBALI_LOW_POINT_TO_FRONT,
        SUBALI_MIDDLE_FRONT,
        SUBALI_DOWN_FRONT,
        SUBALI_POINT_TO_SELF,
        SUBALI_DOWN_BACK,
        SUBALI_ON_HIP_BACK,
        SUBALI_POINT_TO_BACK,
        SUBALI_LOW_POINT_TO_BACK,
        SUBALI_MIDDLE_BACK,

        WIBHISANA_HAND,
        EXIT_WIBHISANA_HAND,
        WIBHISANA_POINT_TO_FRONT,
        WIBHISANA_LOW_POINT_TO_FRONT,
        WIBHISANA_MIDDLE_FRONT,
        WIBHISANA_DOWN_FRONT,
        WIBHISANA_POINT_TO_SELF,
        WIBHISANA_DOWN_BACK,
        WIBHISANA_ON_HIP_BACK,
        WIBHISANA_POINT_TO_BACK,
        WIBHISANA_LOW_POINT_TO_BACK,
        WIBHISANA_MIDDLE_BACK,

        ANGGADA_HAND,
        EXIT_ANGGADA_HAND,
        ANGGADA_POINT_TO_FRONT,
        ANGGADA_LOW_POINT_TO_FRONT,
        ANGGADA_MIDDLE_FRONT,
        ANGGADA_DOWN_FRONT,
        ANGGADA_POINT_TO_SELF,
        ANGGADA_DOWN_BACK,
        ANGGADA_ON_HIP_BACK,
        ANGGADA_POINT_TO_BACK,
        ANGGADA_LOW_POINT_TO_BACK,
        ANGGADA_MIDDLE_BACK,

        ANILA_HAND,
        EXIT_ANILA_HAND,
        ANILA_POINT_TO_FRONT,
        ANILA_LOW_POINT_TO_FRONT,
        ANILA_MIDDLE_FRONT,
        ANILA_DOWN_FRONT,
        ANILA_POINT_TO_SELF,
        ANILA_DOWN_BACK,
        ANILA_ON_HIP_BACK,
        ANILA_POINT_TO_BACK,
        ANILA_LOW_POINT_TO_BACK,
        ANILA_MIDDLE_BACK,

    };

    enum PAGE_ROUTE
    {
        MENU_PAGE,
        EPISODE_PAGE,
        CALIBRATE_PAGE,
        SETTINGS_PAGE,
        SENSOR_STATUS_PAGE,
        WAYANG_HAND_CALIBRATION_PAGE,
        SITA_HAND_PAGE,
        RAHWANA_HAND_PAGE,
        RAMA_WIJAYA_HAND_PAGE,
        HANOMAN_HAND_PAGE,
        LAKSMANA_HAND_PAGE,
        SUGRIWA_HAND_PAGE,
        SUBALI_HAND_PAGE,
        WIBHISANA_HAND_PAGE,
        ANGGADA_HAND_PAGE,
        ANILA_HAND_PAGE,

    };

    enum EPISODE_SUB_PAGE_ROUTE
    {
        EPISODE123,
        EPISODE1234,
        EPISODE2345,
    };

    enum SETTINGS_PAGE_ROUTE
    {
        OPTION_SETTINGS,
        VOLUME_SETTINGS,
    };

    enum CALIBRATE_SUB_PAGE_ROUTE
    {
        CALIBRATE_1,
        CALIBRATE_2,
    };

    enum SENSOR_STATUS_SUB_PAGE_ROUTE
    {
        SENSOR_123,
        SENSOR_1234,
        SENSOR_2345,
        SENSOR_3456,
        SENSOR_4567,
        SENSOR_5678,
        SENSOR_6789,
        SENSOR_78910,
    };

    enum WAYANG_HAND_CALIBRATION_SUB_PAGE_ROUTE
    {
        WAYANG_HAND_CALIBRATION_1,
        WAYANG_HAND_CALIBRATION_2,
        WAYANG_HAND_CALIBRATION_3,
        WAYANG_HAND_CALIBRATION_4,
        WAYANG_HAND_CALIBRATION_5,
        WAYANG_HAND_CALIBRATION_6,
        WAYANG_HAND_CALIBRATION_7,
        WAYANG_HAND_CALIBRATION_8,
        WAYANG_HAND_CALIBRATION_9,
    };

    // Sita sub page route
    enum SITA_SUB_PAGE_ROUTE
    {
        SITA_HAND_CALIBRATION_1,
        SITA_HAND_CALIBRATION_2,
        SITA_HAND_CALIBRATION_3,
        SITA_HAND_CALIBRATION_4,
        SITA_HAND_CALIBRATION_5,
        SITA_HAND_CALIBRATION_6,
        SITA_HAND_CALIBRATION_7,
        SITA_HAND_CALIBRATION_8,
    };

    // Rahwana sub page route
    enum RAHWANA_SUB_PAGE_ROUTE{
        RAHWANA_HAND_CALIBRATION_1,
        RAHWANA_HAND_CALIBRATION_2,
        RAHWANA_HAND_CALIBRATION_3,
    };

    // Rama sub page route 
    enum RAMA_WIJAYA_SUB_PAGE_ROUTE{
        RAMA_WIJAYA_HAND_CALIBRATION_1,
        RAMA_WIJAYA_HAND_CALIBRATION_2,
        RAMA_WIJAYA_HAND_CALIBRATION_3,
        RAMA_WIJAYA_HAND_CALIBRATION_4,
        RAMA_WIJAYA_HAND_CALIBRATION_5,
        RAMA_WIJAYA_HAND_CALIBRATION_6,
        RAMA_WIJAYA_HAND_CALIBRATION_7,
        RAMA_WIJAYA_HAND_CALIBRATION_8,
    };

    // Hanoman sub page route
    enum HANOMAN_SUB_PAGE_ROUTE{
        HANOMAN_HAND_CALIBRATION_1,
        HANOMAN_HAND_CALIBRATION_2,
        HANOMAN_HAND_CALIBRATION_3,
        HANOMAN_HAND_CALIBRATION_4,
        HANOMAN_HAND_CALIBRATION_5,
        HANOMAN_HAND_CALIBRATION_6,
        HANOMAN_HAND_CALIBRATION_7,
        HANOMAN_HAND_CALIBRATION_8,
    };

    // Laksmana sub page route
    enum LAKSMANA_SUB_PAGE_ROUTE{
        LAKSMANA_HAND_CALIBRATION_1,
        LAKSMANA_HAND_CALIBRATION_2,
        LAKSMANA_HAND_CALIBRATION_3,
        LAKSMANA_HAND_CALIBRATION_4,
        LAKSMANA_HAND_CALIBRATION_5,
        LAKSMANA_HAND_CALIBRATION_6,
        LAKSMANA_HAND_CALIBRATION_7,
        LAKSMANA_HAND_CALIBRATION_8,
    };

    // Sugriwa sub page route
    enum SUGRIWA_SUB_PAGE_ROUTE{
        SUGRIWA_HAND_CALIBRATION_1,
        SUGRIWA_HAND_CALIBRATION_2,
        SUGRIWA_HAND_CALIBRATION_3,
        SUGRIWA_HAND_CALIBRATION_4,
        SUGRIWA_HAND_CALIBRATION_5,
        SUGRIWA_HAND_CALIBRATION_6,
        SUGRIWA_HAND_CALIBRATION_7,
        SUGRIWA_HAND_CALIBRATION_8,
    };

    // Subali sub page route
    enum SUBALI_SUB_PAGE_ROUTE{
        SUBALI_HAND_CALIBRATION_1,
        SUBALI_HAND_CALIBRATION_2,
        SUBALI_HAND_CALIBRATION_3,
        SUBALI_HAND_CALIBRATION_4,
        SUBALI_HAND_CALIBRATION_5,
        SUBALI_HAND_CALIBRATION_6,
        SUBALI_HAND_CALIBRATION_7,
        SUBALI_HAND_CALIBRATION_8,
    };

    // Wibhisana sub page route
    enum WIBHISANA_SUB_PAGE_ROUTE{
        WIBHISANA_HAND_CALIBRATION_1,
        WIBHISANA_HAND_CALIBRATION_2,
        WIBHISANA_HAND_CALIBRATION_3,
        WIBHISANA_HAND_CALIBRATION_4,
        WIBHISANA_HAND_CALIBRATION_5,
        WIBHISANA_HAND_CALIBRATION_6,
        WIBHISANA_HAND_CALIBRATION_7,
        WIBHISANA_HAND_CALIBRATION_8,
    };

    // Anggada sub page route
    enum ANGGADA_SUB_PAGE_ROUTE{
        ANGGADA_HAND_CALIBRATION_1,
        ANGGADA_HAND_CALIBRATION_2,
        ANGGADA_HAND_CALIBRATION_3,
        ANGGADA_HAND_CALIBRATION_4,
        ANGGADA_HAND_CALIBRATION_5,
        ANGGADA_HAND_CALIBRATION_6,
        ANGGADA_HAND_CALIBRATION_7,
        ANGGADA_HAND_CALIBRATION_8,
    };

    // Anila sub page route
    enum ANILA_SUB_PAGE_ROUTE{
        ANILA_HAND_CALIBRATION_1,
        ANILA_HAND_CALIBRATION_2,
        ANILA_HAND_CALIBRATION_3,
        ANILA_HAND_CALIBRATION_4,
        ANILA_HAND_CALIBRATION_5,
        ANILA_HAND_CALIBRATION_6,
        ANILA_HAND_CALIBRATION_7,
        ANILA_HAND_CALIBRATION_8,
    };
};

#endif // STATE_MANAGEMENT_H