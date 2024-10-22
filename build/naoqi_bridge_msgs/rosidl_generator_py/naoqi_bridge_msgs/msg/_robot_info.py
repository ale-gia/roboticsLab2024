# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/RobotInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotInfo(type):
    """Metaclass of message 'RobotInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAO': 0,
        'ROMEO': 1,
        'PEPPER': 2,
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
                'naoqi_bridge_msgs.msg.RobotInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAO': cls.__constants['NAO'],
            'ROMEO': cls.__constants['ROMEO'],
            'PEPPER': cls.__constants['PEPPER'],
        }

    @property
    def NAO(self):
        """Message constant 'NAO'."""
        return Metaclass_RobotInfo.__constants['NAO']

    @property
    def ROMEO(self):
        """Message constant 'ROMEO'."""
        return Metaclass_RobotInfo.__constants['ROMEO']

    @property
    def PEPPER(self):
        """Message constant 'PEPPER'."""
        return Metaclass_RobotInfo.__constants['PEPPER']


class RobotInfo(metaclass=Metaclass_RobotInfo):
    """
    Message class 'RobotInfo'.

    Constants:
      NAO
      ROMEO
      PEPPER
    """

    __slots__ = [
        '_type',
        '_model',
        '_head_version',
        '_body_version',
        '_arm_version',
        '_has_laser',
        '_has_extended_arms',
        '_number_of_legs',
        '_number_of_arms',
        '_number_of_hands',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'model': 'string',
        'head_version': 'string',
        'body_version': 'string',
        'arm_version': 'string',
        'has_laser': 'boolean',
        'has_extended_arms': 'boolean',
        'number_of_legs': 'int32',
        'number_of_arms': 'int32',
        'number_of_hands': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.model = kwargs.get('model', str())
        self.head_version = kwargs.get('head_version', str())
        self.body_version = kwargs.get('body_version', str())
        self.arm_version = kwargs.get('arm_version', str())
        self.has_laser = kwargs.get('has_laser', bool())
        self.has_extended_arms = kwargs.get('has_extended_arms', bool())
        self.number_of_legs = kwargs.get('number_of_legs', int())
        self.number_of_arms = kwargs.get('number_of_arms', int())
        self.number_of_hands = kwargs.get('number_of_hands', int())

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
        if self.type != other.type:
            return False
        if self.model != other.model:
            return False
        if self.head_version != other.head_version:
            return False
        if self.body_version != other.body_version:
            return False
        if self.arm_version != other.arm_version:
            return False
        if self.has_laser != other.has_laser:
            return False
        if self.has_extended_arms != other.has_extended_arms:
            return False
        if self.number_of_legs != other.number_of_legs:
            return False
        if self.number_of_arms != other.number_of_arms:
            return False
        if self.number_of_hands != other.number_of_hands:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def head_version(self):
        """Message field 'head_version'."""
        return self._head_version

    @head_version.setter
    def head_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'head_version' field must be of type 'str'"
        self._head_version = value

    @builtins.property
    def body_version(self):
        """Message field 'body_version'."""
        return self._body_version

    @body_version.setter
    def body_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_version' field must be of type 'str'"
        self._body_version = value

    @builtins.property
    def arm_version(self):
        """Message field 'arm_version'."""
        return self._arm_version

    @arm_version.setter
    def arm_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'arm_version' field must be of type 'str'"
        self._arm_version = value

    @builtins.property
    def has_laser(self):
        """Message field 'has_laser'."""
        return self._has_laser

    @has_laser.setter
    def has_laser(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_laser' field must be of type 'bool'"
        self._has_laser = value

    @builtins.property
    def has_extended_arms(self):
        """Message field 'has_extended_arms'."""
        return self._has_extended_arms

    @has_extended_arms.setter
    def has_extended_arms(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_extended_arms' field must be of type 'bool'"
        self._has_extended_arms = value

    @builtins.property
    def number_of_legs(self):
        """Message field 'number_of_legs'."""
        return self._number_of_legs

    @number_of_legs.setter
    def number_of_legs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_legs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_legs' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_legs = value

    @builtins.property
    def number_of_arms(self):
        """Message field 'number_of_arms'."""
        return self._number_of_arms

    @number_of_arms.setter
    def number_of_arms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_arms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_arms' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_arms = value

    @builtins.property
    def number_of_hands(self):
        """Message field 'number_of_hands'."""
        return self._number_of_hands

    @number_of_hands.setter
    def number_of_hands(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_hands' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_hands' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_hands = value
