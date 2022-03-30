#pragma once
// MESSAGE AERODELFT_SENSOR_TEMP PACKING

#define MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP 229


typedef struct __mavlink_aerodelft_sensor_temp_t {
 uint64_t timestamp_sample; /*<  Sample time stamp*/
 uint64_t timestamp; /*<  Timestamp*/
 uint32_t device_id; /*<  Device Id*/
 float temperature; /*< [C] Temperature*/
} mavlink_aerodelft_sensor_temp_t;

#define MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN 24
#define MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN 24
#define MAVLINK_MSG_ID_229_LEN 24
#define MAVLINK_MSG_ID_229_MIN_LEN 24

#define MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC 63
#define MAVLINK_MSG_ID_229_CRC 63



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AERODELFT_SENSOR_TEMP { \
    229, \
    "AERODELFT_SENSOR_TEMP", \
    4, \
    {  { "timestamp_sample", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aerodelft_sensor_temp_t, timestamp_sample) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_aerodelft_sensor_temp_t, timestamp) }, \
         { "device_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_aerodelft_sensor_temp_t, device_id) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aerodelft_sensor_temp_t, temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AERODELFT_SENSOR_TEMP { \
    "AERODELFT_SENSOR_TEMP", \
    4, \
    {  { "timestamp_sample", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aerodelft_sensor_temp_t, timestamp_sample) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_aerodelft_sensor_temp_t, timestamp) }, \
         { "device_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_aerodelft_sensor_temp_t, device_id) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aerodelft_sensor_temp_t, temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a aerodelft_sensor_temp message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_sample  Sample time stamp
 * @param timestamp  Timestamp
 * @param device_id  Device Id
 * @param temperature [C] Temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aerodelft_sensor_temp_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_sample, uint64_t timestamp, uint32_t device_id, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_sample);
    _mav_put_uint64_t(buf, 8, timestamp);
    _mav_put_uint32_t(buf, 16, device_id);
    _mav_put_float(buf, 20, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN);
#else
    mavlink_aerodelft_sensor_temp_t packet;
    packet.timestamp_sample = timestamp_sample;
    packet.timestamp = timestamp;
    packet.device_id = device_id;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
}

/**
 * @brief Pack a aerodelft_sensor_temp message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_sample  Sample time stamp
 * @param timestamp  Timestamp
 * @param device_id  Device Id
 * @param temperature [C] Temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aerodelft_sensor_temp_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_sample,uint64_t timestamp,uint32_t device_id,float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_sample);
    _mav_put_uint64_t(buf, 8, timestamp);
    _mav_put_uint32_t(buf, 16, device_id);
    _mav_put_float(buf, 20, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN);
#else
    mavlink_aerodelft_sensor_temp_t packet;
    packet.timestamp_sample = timestamp_sample;
    packet.timestamp = timestamp;
    packet.device_id = device_id;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
}

/**
 * @brief Encode a aerodelft_sensor_temp struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aerodelft_sensor_temp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aerodelft_sensor_temp_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aerodelft_sensor_temp_t* aerodelft_sensor_temp)
{
    return mavlink_msg_aerodelft_sensor_temp_pack(system_id, component_id, msg, aerodelft_sensor_temp->timestamp_sample, aerodelft_sensor_temp->timestamp, aerodelft_sensor_temp->device_id, aerodelft_sensor_temp->temperature);
}

/**
 * @brief Encode a aerodelft_sensor_temp struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aerodelft_sensor_temp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aerodelft_sensor_temp_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aerodelft_sensor_temp_t* aerodelft_sensor_temp)
{
    return mavlink_msg_aerodelft_sensor_temp_pack_chan(system_id, component_id, chan, msg, aerodelft_sensor_temp->timestamp_sample, aerodelft_sensor_temp->timestamp, aerodelft_sensor_temp->device_id, aerodelft_sensor_temp->temperature);
}

/**
 * @brief Send a aerodelft_sensor_temp message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_sample  Sample time stamp
 * @param timestamp  Timestamp
 * @param device_id  Device Id
 * @param temperature [C] Temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aerodelft_sensor_temp_send(mavlink_channel_t chan, uint64_t timestamp_sample, uint64_t timestamp, uint32_t device_id, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_sample);
    _mav_put_uint64_t(buf, 8, timestamp);
    _mav_put_uint32_t(buf, 16, device_id);
    _mav_put_float(buf, 20, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP, buf, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
#else
    mavlink_aerodelft_sensor_temp_t packet;
    packet.timestamp_sample = timestamp_sample;
    packet.timestamp = timestamp;
    packet.device_id = device_id;
    packet.temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP, (const char *)&packet, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
#endif
}

/**
 * @brief Send a aerodelft_sensor_temp message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aerodelft_sensor_temp_send_struct(mavlink_channel_t chan, const mavlink_aerodelft_sensor_temp_t* aerodelft_sensor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aerodelft_sensor_temp_send(chan, aerodelft_sensor_temp->timestamp_sample, aerodelft_sensor_temp->timestamp, aerodelft_sensor_temp->device_id, aerodelft_sensor_temp->temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP, (const char *)aerodelft_sensor_temp, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
#endif
}

#if MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aerodelft_sensor_temp_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_sample, uint64_t timestamp, uint32_t device_id, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_sample);
    _mav_put_uint64_t(buf, 8, timestamp);
    _mav_put_uint32_t(buf, 16, device_id);
    _mav_put_float(buf, 20, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP, buf, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
#else
    mavlink_aerodelft_sensor_temp_t *packet = (mavlink_aerodelft_sensor_temp_t *)msgbuf;
    packet->timestamp_sample = timestamp_sample;
    packet->timestamp = timestamp;
    packet->device_id = device_id;
    packet->temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP, (const char *)packet, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_MIN_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_CRC);
#endif
}
#endif

#endif

// MESSAGE AERODELFT_SENSOR_TEMP UNPACKING


/**
 * @brief Get field timestamp_sample from aerodelft_sensor_temp message
 *
 * @return  Sample time stamp
 */
static inline uint64_t mavlink_msg_aerodelft_sensor_temp_get_timestamp_sample(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field timestamp from aerodelft_sensor_temp message
 *
 * @return  Timestamp
 */
static inline uint64_t mavlink_msg_aerodelft_sensor_temp_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field device_id from aerodelft_sensor_temp message
 *
 * @return  Device Id
 */
static inline uint32_t mavlink_msg_aerodelft_sensor_temp_get_device_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field temperature from aerodelft_sensor_temp message
 *
 * @return [C] Temperature
 */
static inline float mavlink_msg_aerodelft_sensor_temp_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a aerodelft_sensor_temp message into a struct
 *
 * @param msg The message to decode
 * @param aerodelft_sensor_temp C-struct to decode the message contents into
 */
static inline void mavlink_msg_aerodelft_sensor_temp_decode(const mavlink_message_t* msg, mavlink_aerodelft_sensor_temp_t* aerodelft_sensor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aerodelft_sensor_temp->timestamp_sample = mavlink_msg_aerodelft_sensor_temp_get_timestamp_sample(msg);
    aerodelft_sensor_temp->timestamp = mavlink_msg_aerodelft_sensor_temp_get_timestamp(msg);
    aerodelft_sensor_temp->device_id = mavlink_msg_aerodelft_sensor_temp_get_device_id(msg);
    aerodelft_sensor_temp->temperature = mavlink_msg_aerodelft_sensor_temp_get_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN? msg->len : MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN;
        memset(aerodelft_sensor_temp, 0, MAVLINK_MSG_ID_AERODELFT_SENSOR_TEMP_LEN);
    memcpy(aerodelft_sensor_temp, _MAV_PAYLOAD(msg), len);
#endif
}
