#ifndef DEFINE_H
#define DEFINE_H

#define IMAGES_PATH "/home/tung/WSAN/Pi-OBUSoftware/WSAN/Images/Sensor"
#define DATA_PATH "/home/tung/WSAN/Pi-OBUSoftware/WSAN/dataHN.txt"
#define GPS_FILE "/home/tung/WSAN/Pi-OBUSoftware/WSAN/gps.txt"
#define HISTORY_FILE "/home/tung/WSAN/Pi-OBUSoftware/WSAN/history.txt"
#define LOG_FILE "/home/tung/WSAN/Pi-OBUSoftware/WSAN/log.txt"
#define TIME_DETECT "/home/tung/WSAN/Pi-OBUSoftware/WSAN/timeDetect.txt"

#define NOFFUNC 3
#define NOSENSOR 5

#define TAKE_TEMP_AND_HUM 0
#define TAKE_PHOTO 1
#define REQUEST_STATUS 2
#define RETASK 3

#define TRANCEIVER_PORT_DEFAULT "ttyUSB0"
#define TRANCEIVER_BAUDRATE_DEFAULT B19200
#define GPS_PORT_DEFAULT "ttyUSB1"
#define GPS_BAUDRATE_DEFAULT B9600

//define mqtt
#define hostMqtt "192.168.0.20"
#define portMqtt 1883


//#define hostMqtt "m13.cloudmqtt.com"
//#define portMqtt 15903

//
#endif // DEFINE_H
