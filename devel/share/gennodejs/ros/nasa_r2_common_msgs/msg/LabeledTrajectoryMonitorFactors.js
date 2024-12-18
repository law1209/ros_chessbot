// Auto-generated. Do not edit!

// (in-package nasa_r2_common_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class LabeledTrajectoryMonitorFactors {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.originator = null;
      this.joint_names = null;
      this.torqueLimitFactors = null;
      this.distanceFactors = null;
    }
    else {
      if (initObj.hasOwnProperty('originator')) {
        this.originator = initObj.originator
      }
      else {
        this.originator = '';
      }
      if (initObj.hasOwnProperty('joint_names')) {
        this.joint_names = initObj.joint_names
      }
      else {
        this.joint_names = [];
      }
      if (initObj.hasOwnProperty('torqueLimitFactors')) {
        this.torqueLimitFactors = initObj.torqueLimitFactors
      }
      else {
        this.torqueLimitFactors = [];
      }
      if (initObj.hasOwnProperty('distanceFactors')) {
        this.distanceFactors = initObj.distanceFactors
      }
      else {
        this.distanceFactors = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LabeledTrajectoryMonitorFactors
    // Serialize message field [originator]
    bufferOffset = _serializer.string(obj.originator, buffer, bufferOffset);
    // Serialize message field [joint_names]
    bufferOffset = _arraySerializer.string(obj.joint_names, buffer, bufferOffset, null);
    // Serialize message field [torqueLimitFactors]
    bufferOffset = _arraySerializer.float64(obj.torqueLimitFactors, buffer, bufferOffset, null);
    // Serialize message field [distanceFactors]
    bufferOffset = _arraySerializer.float64(obj.distanceFactors, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LabeledTrajectoryMonitorFactors
    let len;
    let data = new LabeledTrajectoryMonitorFactors(null);
    // Deserialize message field [originator]
    data.originator = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [joint_names]
    data.joint_names = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [torqueLimitFactors]
    data.torqueLimitFactors = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [distanceFactors]
    data.distanceFactors = _arrayDeserializer.float64(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.originator.length;
    object.joint_names.forEach((val) => {
      length += 4 + val.length;
    });
    length += 8 * object.torqueLimitFactors.length;
    length += 8 * object.distanceFactors.length;
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'nasa_r2_common_msgs/LabeledTrajectoryMonitorFactors';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a48b940794366a56997943ecd6977867';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string originator
    string[] joint_names
    float64[] torqueLimitFactors
    float64[] distanceFactors
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LabeledTrajectoryMonitorFactors(null);
    if (msg.originator !== undefined) {
      resolved.originator = msg.originator;
    }
    else {
      resolved.originator = ''
    }

    if (msg.joint_names !== undefined) {
      resolved.joint_names = msg.joint_names;
    }
    else {
      resolved.joint_names = []
    }

    if (msg.torqueLimitFactors !== undefined) {
      resolved.torqueLimitFactors = msg.torqueLimitFactors;
    }
    else {
      resolved.torqueLimitFactors = []
    }

    if (msg.distanceFactors !== undefined) {
      resolved.distanceFactors = msg.distanceFactors;
    }
    else {
      resolved.distanceFactors = []
    }

    return resolved;
    }
};

module.exports = LabeledTrajectoryMonitorFactors;
