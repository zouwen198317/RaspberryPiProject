"""autogenerated by genpy from wheels/cmd_set_car_direction_speedRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class cmd_set_car_direction_speedRequest(genpy.Message):
  _md5sum = "f9cc4e6dec1e6d884ceb90732596657a"
  _type = "wheels/cmd_set_car_direction_speedRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 nNewDirection
uint32 nNewSpeed

"""
  __slots__ = ['nNewDirection','nNewSpeed']
  _slot_types = ['uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       nNewDirection,nNewSpeed

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cmd_set_car_direction_speedRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.nNewDirection is None:
        self.nNewDirection = 0
      if self.nNewSpeed is None:
        self.nNewSpeed = 0
    else:
      self.nNewDirection = 0
      self.nNewSpeed = 0

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
      _x = self
      buff.write(_struct_2I.pack(_x.nNewDirection, _x.nNewSpeed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.nNewDirection, _x.nNewSpeed,) = _struct_2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2I.pack(_x.nNewDirection, _x.nNewSpeed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.nNewDirection, _x.nNewSpeed,) = _struct_2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2I = struct.Struct("<2I")
"""autogenerated by genpy from wheels/cmd_set_car_direction_speedResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class cmd_set_car_direction_speedResponse(genpy.Message):
  _md5sum = "d1d5de1a921fe9f023cf5b01c0b084e7"
  _type = "wheels/cmd_set_car_direction_speedResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 nLastDirection
uint32 nLastSpeed
uint32 nNewDirection
uint32 nNewSpeed
int32 nRetCode


"""
  __slots__ = ['nLastDirection','nLastSpeed','nNewDirection','nNewSpeed','nRetCode']
  _slot_types = ['uint32','uint32','uint32','uint32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       nLastDirection,nLastSpeed,nNewDirection,nNewSpeed,nRetCode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cmd_set_car_direction_speedResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.nLastDirection is None:
        self.nLastDirection = 0
      if self.nLastSpeed is None:
        self.nLastSpeed = 0
      if self.nNewDirection is None:
        self.nNewDirection = 0
      if self.nNewSpeed is None:
        self.nNewSpeed = 0
      if self.nRetCode is None:
        self.nRetCode = 0
    else:
      self.nLastDirection = 0
      self.nLastSpeed = 0
      self.nNewDirection = 0
      self.nNewSpeed = 0
      self.nRetCode = 0

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
      _x = self
      buff.write(_struct_4Ii.pack(_x.nLastDirection, _x.nLastSpeed, _x.nNewDirection, _x.nNewSpeed, _x.nRetCode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.nLastDirection, _x.nLastSpeed, _x.nNewDirection, _x.nNewSpeed, _x.nRetCode,) = _struct_4Ii.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_4Ii.pack(_x.nLastDirection, _x.nLastSpeed, _x.nNewDirection, _x.nNewSpeed, _x.nRetCode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.nLastDirection, _x.nLastSpeed, _x.nNewDirection, _x.nNewSpeed, _x.nRetCode,) = _struct_4Ii.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4Ii = struct.Struct("<4Ii")
class cmd_set_car_direction_speed(object):
  _type          = 'wheels/cmd_set_car_direction_speed'
  _md5sum = '837840bb4073141683806c367f33409b'
  _request_class  = cmd_set_car_direction_speedRequest
  _response_class = cmd_set_car_direction_speedResponse