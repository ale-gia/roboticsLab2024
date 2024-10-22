# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/SoundLocated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SoundLocated(type):
    """Metaclass of message 'SoundLocated'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'naoqi_bridge_msgs.msg.SoundLocated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sound_located
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sound_located
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sound_located
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sound_located
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sound_located

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SoundLocated(metaclass=Metaclass_SoundLocated):
    """Message class 'SoundLocated'."""

    __slots__ = [
        '_header',
        '_azimuth',
        '_elevation',
        '_confidence',
        '_energy',
        '_head_position_frame_torso',
        '_head_position_frame_robot',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'azimuth': 'double',
        'elevation': 'double',
        'confidence': 'double',
        'energy': 'double',
        'head_position_frame_torso': 'geometry_msgs/Twist',
        'head_position_frame_robot': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.azimuth = kwargs.get('azimuth', float())
        self.elevation = kwargs.get('elevation', float())
        self.confidence = kwargs.get('confidence', float())
        self.energy = kwargs.get('energy', float())
        from geometry_msgs.msg import Twist
        self.head_position_frame_torso = kwargs.get('head_position_frame_torso', Twist())
        from geometry_msgs.msg import Twist
        self.head_position_frame_robot = kwargs.get('head_position_frame_robot', Twist())

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
        if self.azimuth != other.azimuth:
            return False
        if self.elevation != other.elevation:
            return False
        if self.confidence != other.confidence:
            return False
        if self.energy != other.energy:
            return False
        if self.head_position_frame_torso != other.head_position_frame_torso:
            return False
        if self.head_position_frame_robot != other.head_position_frame_robot:
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
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azimuth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azimuth = value

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elevation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elevation = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def energy(self):
        """Message field 'energy'."""
        return self._energy

    @energy.setter
    def energy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'energy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'energy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._energy = value

    @builtins.property
    def head_position_frame_torso(self):
        """Message field 'head_position_frame_torso'."""
        return self._head_position_frame_torso

    @head_position_frame_torso.setter
    def head_position_frame_torso(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'head_position_frame_torso' field must be a sub message of type 'Twist'"
        self._head_position_frame_torso = value

    @builtins.property
    def head_position_frame_robot(self):
        """Message field 'head_position_frame_robot'."""
        return self._head_position_frame_robot

    @head_position_frame_robot.setter
    def head_position_frame_robot(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'head_position_frame_robot' field must be a sub message of type 'Twist'"
        self._head_position_frame_robot = value
