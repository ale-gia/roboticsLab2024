# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/FadeRGB.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FadeRGB(type):
    """Metaclass of message 'FadeRGB'."""

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
                'naoqi_bridge_msgs.msg.FadeRGB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fade_rgb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fade_rgb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fade_rgb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fade_rgb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fade_rgb

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FadeRGB(metaclass=Metaclass_FadeRGB):
    """Message class 'FadeRGB'."""

    __slots__ = [
        '_led_name',
        '_color',
        '_fade_duration',
    ]

    _fields_and_field_types = {
        'led_name': 'string',
        'color': 'std_msgs/ColorRGBA',
        'fade_duration': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.led_name = kwargs.get('led_name', str())
        from std_msgs.msg import ColorRGBA
        self.color = kwargs.get('color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.fade_duration = kwargs.get('fade_duration', Duration())

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
        if self.led_name != other.led_name:
            return False
        if self.color != other.color:
            return False
        if self.fade_duration != other.fade_duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def led_name(self):
        """Message field 'led_name'."""
        return self._led_name

    @led_name.setter
    def led_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'led_name' field must be of type 'str'"
        self._led_name = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'color' field must be a sub message of type 'ColorRGBA'"
        self._color = value

    @builtins.property
    def fade_duration(self):
        """Message field 'fade_duration'."""
        return self._fade_duration

    @fade_duration.setter
    def fade_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'fade_duration' field must be a sub message of type 'Duration'"
        self._fade_duration = value
