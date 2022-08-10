
import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID, UNIT_EMPTY, ICON_EMPTY

soil_moisture_sensor_ns = cg.esphome_ns.namespace('soil_moisture_sensor')

SoilMoistureSensor = soil_moisture_sensor_ns.class_('SoilMoistureSensor', cg.PollingComponent)

CONFIG_SCHEMA = sensor.sensor_schema(unit_of_measurement=UNIT_EMPTY, accuracy_decimals=2).extend({
    cv.GenerateID(): cv.declare_id(SoilMoistureSensor)
}).extend(cv.polling_component_schema('60s'))


def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield sensor.register_sensor(var, config)
