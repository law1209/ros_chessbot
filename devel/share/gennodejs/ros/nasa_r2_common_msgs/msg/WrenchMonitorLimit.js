// Auto-generated. Do not edit!

// (in-package nasa_r2_common_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class WrenchMonitorLimit {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.name = null;
      this.force = null;
      this.torque = null;
      this.isFraction = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = [];
      }
      if (initObj.hasOwnProperty('force')) {
        this.force = initObj.force
      }
      else {
        this.force = [];
      }
      if (initObj.hasOwnProperty('torque')) {
        this.torque = initObj.torque
      }
      else {
        this.torque = [];
      }
      if (initObj.hasOwnProperty('isFraction')) {
        this.isFraction = initObj.isFraction
      }
      else {
        this.isFraction = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WrenchMonitorLimit
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [name]
    bufferOffset = _arraySerializer.string(obj.name, buffer, bufferOffset, null);
    // Serialize message field [force]
    bufferOffset = _arraySerializer.float64(obj.force, buffer, bufferOffset, null);
    // Serialize message field [torque]
    bufferOffset = _arraySerializer.float64(obj.torque, buffer, bufferOffset, null);
    // Serialize message field [isFraction]
    bufferOffset = _arraySerializer.bool(obj.isFraction, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WrenchMonitorLimit
    let len;
    let data = new WrenchMonitorLimit(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [name]
    data.name = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [force]
    data.force = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [torque]
    data.torque = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [isFraction]
    data.isFraction = _arrayDeserializer.bool(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    object.name.forEach((val) => {
      length += 4 + val.length;
    });
    length += 8 * object.force.length;
    length += 8 * object.torque.length;
    length += object.isFraction.length;
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'nasa_r2_common_msgs/WrenchMonitorLimit';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4535825230d82d19f739062cbc5d17ed';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    string[] name
    float64[] force
    float64[] torque
    bool[] isFraction
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WrenchMonitorLimit(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = []
    }

    if (msg.force !== undefined) {
      resolved.force = msg.force;
    }
    else {
      resolved.force = []
    }

    if (msg.torque !== undefined) {
      resolved.torque = msg.torque;
    }
    else {
      resolved.torque = []
    }

    if (msg.isFraction !== undefined) {
      resolved.isFraction = msg.isFraction;
    }
    else {
      resolved.isFraction = []
    }

    return resolved;
    }
};

module.exports = WrenchMonitorLimit;
