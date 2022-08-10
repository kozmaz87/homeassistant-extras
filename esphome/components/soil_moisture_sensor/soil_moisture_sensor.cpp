#include "esphome/core/log.h"
#include "soil_moisture_sensor.h"

namespace esphome {
namespace soil_moisture_sensor {

static const char *TAG = "soil_moisture_sensor.sensor";

void SoilMoistureSensor::setup() {

}

void SoilMoistureSensor::loop() {
    // ESP_LOGD(TAG, "Got soil moisture reading: %.2f", 0.52);
}

void SoilMoistureSensor::update() {

}

void SoilMoistureSensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Soil Moisture Sensor");
}

} //namespace soil_moisture_sensor
} //namespace esphome