# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/Bumper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bumper(type):
    """Metaclass of message 'Bumper'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RIGHT': 0,
        'LEFT': 1,
        'BACK': 2,
        'STATE_RELEASED': 0,
        'STATE_PRESSED': 1,
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
                'naoqi_bridge_msgs.msg.Bumper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bumper
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bumper
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bumper
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bumper
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bumper

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RIGHT': cls.__constants['RIGHT'],
            'LEFT': cls.__constants['LEFT'],
            'BACK': cls.__constants['BACK'],
            'STATE_RELEASED': cls.__constants['STATE_RELEASED'],
            'STATE_PRESSED': cls.__constants['STATE_PRESSED'],
        }

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_Bumper.__constants['RIGHT']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_Bumper.__constants['LEFT']

    @property
    def BACK(self):
        """Message constant 'BACK'."""
        return Metaclass_Bumper.__constants['BACK']

    @property
    def STATE_RELEASED(self):
        """Message constant 'STATE_RELEASED'."""
        return Metaclass_Bumper.__constants['STATE_RELEASED']

    @property
    def STATE_PRESSED(self):
        """Message constant 'STATE_PRESSED'."""
        return Metaclass_Bumper.__constants['STATE_PRESSED']


class Bumper(metaclass=Metaclass_Bumper):
    """
    Message class 'Bumper'.

    Constants:
      RIGHT
      LEFT
      BACK
      STATE_RELEASED
      STATE_PRESSED
    """

    __slots__ = [
        '_bumper',
        '_state',
    ]

    _fields_and_field_types = {
        'bumper': 'uint8',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bumper = kwargs.get('bumper', int())
        self.state = kwargs.get('state', int())

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
        if self.bumper != other.bumper:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bumper(self):
        """Message field 'bumper'."""
        return self._bumper

    @bumper.setter
    def bumper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bumper' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bumper' field must be an unsigned integer in [0, 255]"
        self._bumper = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
