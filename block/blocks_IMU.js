module.exports = function(Blockly){
  'use strict';
  // =============================================================================
  // EasyKidsRobotics
  // =============================================================================

Blockly.Blocks['Read_Data_MagHori'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Data Horizontal Direction")
    this.setInputsInline(true);
    this.setOutput(true, "Number");
    this.setColour(300);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['IMU_Begin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("IMU Begin")
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(300);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['IMU Calibration'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("IMU Calibration")
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(300);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['IMU_Get_Mag_Offset'] = {
  init: function() {
    this.appendDummyInput()
      .appendField("IMU Set Offset");
    this.appendDummyInput()
      .appendField("X")
    this.appendValueInput("magX")
      .setCheck("Number")
    this.appendDummyInput()
      .appendField("Y")
    this.appendValueInput("magY")
      .setCheck("Number")
    this.appendDummyInput()
      .appendField("Z")
    this.appendValueInput("magZ")
      .setCheck("Number")
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(300);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};
}