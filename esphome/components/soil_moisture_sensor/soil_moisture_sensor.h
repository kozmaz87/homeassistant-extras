#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace soil_moisture_sensor {

class SoilMoistureSensor : public sensor::Sensor, public PollingComponent {
    void setup() override;
    void loop() override;
    void update() override;
    void dump_config() override;
};

} //namespace soil_moisture_sensor
} //namespace esphome