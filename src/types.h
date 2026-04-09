// src/types.h

#ifndef TYPES_H
#define TYPES_H

typedef struct {
    float roll;
    float pitch;
    float yaw;
} Attitude;

typedef struct {
    float x;
    float y;
    float z;
} IMU;

typedef struct {
    float kp;
    float ki;
    float kd;
} PID;

#endif // TYPES_H