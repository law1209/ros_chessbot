# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nasa_r2_common_msgs/PriorityArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PriorityArray(genpy.Message):
  _md5sum = "b680195622dc1787258149093c8d5b54"
  _type = "nasa_r2_common_msgs/PriorityArray"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# axis_priorities must be 0, 1, or 6 elements
# empty defaults to high, 1 sets all axes equal priority, 6 sets each axis (x, y, z, r, p, y)
uint8[]  axis_priorities

uint8 IGNORE          = 0   # Exclude from trajectory
uint8 CRITICAL        = 1   # Most important priority in trajectory
uint8 HIGH            = 2   # Second most important priority in trajectory
uint8 MEDIUM          = 3   # Medium prioirty in trajectory
uint8 LOW             = 4   # Low priority in trajectory
uint8 OPT             = 5   # Optimize trajectory (solve for, but do not iterate to achieve)

#uint8 IGNORE = 0
#uint8 LOW = 1
#uint8 MEDIUM = 128
#uint8 HIGH = 254
#uint8 CRITICAL = 255
"""
  # Pseudo-constants
  IGNORE = 0
  CRITICAL = 1
  HIGH = 2
  MEDIUM = 3
  LOW = 4
  OPT = 5

  __slots__ = ['axis_priorities']
  _slot_types = ['uint8[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       axis_priorities

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PriorityArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.axis_priorities is None:
        self.axis_priorities = b''
    else:
      self.axis_priorities = b''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.axis_priorities
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.axis_priorities = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.axis_priorities
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.axis_priorities = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
