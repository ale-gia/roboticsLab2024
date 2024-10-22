# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/AudioBuffer.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'channel_map'
# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioBuffer(type):
    """Metaclass of message 'AudioBuffer'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CHANNEL_FRONT_LEFT': 0,
        'CHANNEL_FRONT_CENTER': 1,
        'CHANNEL_FRONT_RIGHT': 2,
        'CHANNEL_REAR_LEFT': 3,
        'CHANNEL_REAR_CENTER': 4,
        'CHANNEL_REAR_RIGHT': 5,
        'CHANNEL_SURROUND_LEFT': 6,
        'CHANNEL_SURROUND_RIGHT': 7,
        'CHANNEL_SUBWOOFER': 8,
        'CHANNEL_LFE': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naoqi_bridge_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naoqi_bridge_msgs.msg.AudioBuffer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_buffer
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_buffer
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_buffer
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_buffer
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_buffer

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CHANNEL_FRONT_LEFT': cls.__constants['CHANNEL_FRONT_LEFT'],
            'CHANNEL_FRONT_CENTER': cls.__constants['CHANNEL_FRONT_CENTER'],
            'CHANNEL_FRONT_RIGHT': cls.__constants['CHANNEL_FRONT_RIGHT'],
            'CHANNEL_REAR_LEFT': cls.__constants['CHANNEL_REAR_LEFT'],
            'CHANNEL_REAR_CENTER': cls.__constants['CHANNEL_REAR_CENTER'],
            'CHANNEL_REAR_RIGHT': cls.__constants['CHANNEL_REAR_RIGHT'],
            'CHANNEL_SURROUND_LEFT': cls.__constants['CHANNEL_SURROUND_LEFT'],
            'CHANNEL_SURROUND_RIGHT': cls.__constants['CHANNEL_SURROUND_RIGHT'],
            'CHANNEL_SUBWOOFER': cls.__constants['CHANNEL_SUBWOOFER'],
            'CHANNEL_LFE': cls.__constants['CHANNEL_LFE'],
        }

    @property
    def CHANNEL_FRONT_LEFT(self):
        """Message constant 'CHANNEL_FRONT_LEFT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_FRONT_LEFT']

    @property
    def CHANNEL_FRONT_CENTER(self):
        """Message constant 'CHANNEL_FRONT_CENTER'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_FRONT_CENTER']

    @property
    def CHANNEL_FRONT_RIGHT(self):
        """Message constant 'CHANNEL_FRONT_RIGHT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_FRONT_RIGHT']

    @property
    def CHANNEL_REAR_LEFT(self):
        """Message constant 'CHANNEL_REAR_LEFT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_REAR_LEFT']

    @property
    def CHANNEL_REAR_CENTER(self):
        """Message constant 'CHANNEL_REAR_CENTER'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_REAR_CENTER']

    @property
    def CHANNEL_REAR_RIGHT(self):
        """Message constant 'CHANNEL_REAR_RIGHT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_REAR_RIGHT']

    @property
    def CHANNEL_SURROUND_LEFT(self):
        """Message constant 'CHANNEL_SURROUND_LEFT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_SURROUND_LEFT']

    @property
    def CHANNEL_SURROUND_RIGHT(self):
        """Message constant 'CHANNEL_SURROUND_RIGHT'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_SURROUND_RIGHT']

    @property
    def CHANNEL_SUBWOOFER(self):
        """Message constant 'CHANNEL_SUBWOOFER'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_SUBWOOFER']

    @property
    def CHANNEL_LFE(self):
        """Message constant 'CHANNEL_LFE'."""
        return Metaclass_AudioBuffer.__constants['CHANNEL_LFE']


class AudioBuffer(metaclass=Metaclass_AudioBuffer):
    """
    Message class 'AudioBuffer'.

    Constants:
      CHANNEL_FRONT_LEFT
      CHANNEL_FRONT_CENTER
      CHANNEL_FRONT_RIGHT
      CHANNEL_REAR_LEFT
      CHANNEL_REAR_CENTER
      CHANNEL_REAR_RIGHT
      CHANNEL_SURROUND_LEFT
      CHANNEL_SURROUND_RIGHT
      CHANNEL_SUBWOOFER
      CHANNEL_LFE
    """

    __slots__ = [
        '_header',
        '_frequency',
        '_channel_map',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frequency': 'uint16',
        'channel_map': 'sequence<uint8>',
        'data': 'sequence<int16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frequency = kwargs.get('frequency', int())
        self.channel_map = array.array('B', kwargs.get('channel_map', []))
        self.data = array.array('h', kwargs.get('data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.frequency != other.frequency:
            return False
        if self.channel_map != other.channel_map:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'frequency' field must be an unsigned integer in [0, 65535]"
        self._frequency = value

    @builtins.property
    def channel_map(self):
        """Message field 'channel_map'."""
        return self._channel_map

    @channel_map.setter
    def channel_map(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'channel_map' array.array() must have the type code of 'B'"
            self._channel_map = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'channel_map' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._channel_map = array.array('B', value)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'data' array.array() must have the type code of 'h'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._data = array.array('h', value)
