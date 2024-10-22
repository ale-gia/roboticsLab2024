# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:msg/MemoryPairInt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MemoryPairInt(type):
    """Metaclass of message 'MemoryPairInt'."""

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
                'naoqi_bridge_msgs.msg.MemoryPairInt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__memory_pair_int
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__memory_pair_int
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__memory_pair_int
            cls._TYPE_SUPPORT = module.type_support_msg__msg__memory_pair_int
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__memory_pair_int

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MemoryPairInt(metaclass=Metaclass_MemoryPairInt):
    """Message class 'MemoryPairInt'."""

    __slots__ = [
        '_memory_key',
        '_data',
    ]

    _fields_and_field_types = {
        'memory_key': 'string',
        'data': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.memory_key = kwargs.get('memory_key', str())
        self.data = kwargs.get('data', int())

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
        if self.memory_key != other.memory_key:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def memory_key(self):
        """Message field 'memory_key'."""
        return self._memory_key

    @memory_key.setter
    def memory_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'memory_key' field must be of type 'str'"
        self._memory_key = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data' field must be an integer in [-2147483648, 2147483647]"
        self._data = value
