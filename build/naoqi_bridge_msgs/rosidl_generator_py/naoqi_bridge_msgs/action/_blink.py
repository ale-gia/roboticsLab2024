# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:action/Blink.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Blink_Goal(type):
    """Metaclass of message 'Blink_Goal'."""

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
                'naoqi_bridge_msgs.action.Blink_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__goal

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


class Blink_Goal(metaclass=Metaclass_Blink_Goal):
    """Message class 'Blink_Goal'."""

    __slots__ = [
        '_colors',
        '_bg_color',
        '_blink_duration',
        '_blink_rate_mean',
        '_blink_rate_sd',
    ]

    _fields_and_field_types = {
        'colors': 'sequence<std_msgs/ColorRGBA>',
        'bg_color': 'std_msgs/ColorRGBA',
        'blink_duration': 'builtin_interfaces/Duration',
        'blink_rate_mean': 'float',
        'blink_rate_sd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.colors = kwargs.get('colors', [])
        from std_msgs.msg import ColorRGBA
        self.bg_color = kwargs.get('bg_color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.blink_duration = kwargs.get('blink_duration', Duration())
        self.blink_rate_mean = kwargs.get('blink_rate_mean', float())
        self.blink_rate_sd = kwargs.get('blink_rate_sd', float())

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
        if self.colors != other.colors:
            return False
        if self.bg_color != other.bg_color:
            return False
        if self.blink_duration != other.blink_duration:
            return False
        if self.blink_rate_mean != other.blink_rate_mean:
            return False
        if self.blink_rate_sd != other.blink_rate_sd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def colors(self):
        """Message field 'colors'."""
        return self._colors

    @colors.setter
    def colors(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
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
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._colors = value

    @builtins.property
    def bg_color(self):
        """Message field 'bg_color'."""
        return self._bg_color

    @bg_color.setter
    def bg_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'bg_color' field must be a sub message of type 'ColorRGBA'"
        self._bg_color = value

    @builtins.property
    def blink_duration(self):
        """Message field 'blink_duration'."""
        return self._blink_duration

    @blink_duration.setter
    def blink_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'blink_duration' field must be a sub message of type 'Duration'"
        self._blink_duration = value

    @builtins.property
    def blink_rate_mean(self):
        """Message field 'blink_rate_mean'."""
        return self._blink_rate_mean

    @blink_rate_mean.setter
    def blink_rate_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blink_rate_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blink_rate_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blink_rate_mean = value

    @builtins.property
    def blink_rate_sd(self):
        """Message field 'blink_rate_sd'."""
        return self._blink_rate_sd

    @blink_rate_sd.setter
    def blink_rate_sd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blink_rate_sd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blink_rate_sd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blink_rate_sd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_Result(type):
    """Metaclass of message 'Blink_Result'."""

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
                'naoqi_bridge_msgs.action.Blink_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_Result(metaclass=Metaclass_Blink_Result):
    """Message class 'Blink_Result'."""

    __slots__ = [
        '_still_blinking',
    ]

    _fields_and_field_types = {
        'still_blinking': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.still_blinking = kwargs.get('still_blinking', bool())

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
        if self.still_blinking != other.still_blinking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def still_blinking(self):
        """Message field 'still_blinking'."""
        return self._still_blinking

    @still_blinking.setter
    def still_blinking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'still_blinking' field must be of type 'bool'"
        self._still_blinking = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_Feedback(type):
    """Metaclass of message 'Blink_Feedback'."""

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
                'naoqi_bridge_msgs.action.Blink_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__feedback

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


class Blink_Feedback(metaclass=Metaclass_Blink_Feedback):
    """Message class 'Blink_Feedback'."""

    __slots__ = [
        '_last_color',
    ]

    _fields_and_field_types = {
        'last_color': 'std_msgs/ColorRGBA',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import ColorRGBA
        self.last_color = kwargs.get('last_color', ColorRGBA())

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
        if self.last_color != other.last_color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def last_color(self):
        """Message field 'last_color'."""
        return self._last_color

    @last_color.setter
    def last_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'last_color' field must be a sub message of type 'ColorRGBA'"
        self._last_color = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_SendGoal_Request(type):
    """Metaclass of message 'Blink_SendGoal_Request'."""

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
                'naoqi_bridge_msgs.action.Blink_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__send_goal__request

            from naoqi_bridge_msgs.action import Blink
            if Blink.Goal.__class__._TYPE_SUPPORT is None:
                Blink.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_SendGoal_Request(metaclass=Metaclass_Blink_SendGoal_Request):
    """Message class 'Blink_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'naoqi_bridge_msgs/Blink_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['naoqi_bridge_msgs', 'action'], 'Blink_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from naoqi_bridge_msgs.action._blink import Blink_Goal
        self.goal = kwargs.get('goal', Blink_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from naoqi_bridge_msgs.action._blink import Blink_Goal
            assert \
                isinstance(value, Blink_Goal), \
                "The 'goal' field must be a sub message of type 'Blink_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_SendGoal_Response(type):
    """Metaclass of message 'Blink_SendGoal_Response'."""

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
                'naoqi_bridge_msgs.action.Blink_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_SendGoal_Response(metaclass=Metaclass_Blink_SendGoal_Response):
    """Message class 'Blink_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Blink_SendGoal(type):
    """Metaclass of service 'Blink_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naoqi_bridge_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naoqi_bridge_msgs.action.Blink_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__blink__send_goal

            from naoqi_bridge_msgs.action import _blink
            if _blink.Metaclass_Blink_SendGoal_Request._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_SendGoal_Request.__import_type_support__()
            if _blink.Metaclass_Blink_SendGoal_Response._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_SendGoal_Response.__import_type_support__()


class Blink_SendGoal(metaclass=Metaclass_Blink_SendGoal):
    from naoqi_bridge_msgs.action._blink import Blink_SendGoal_Request as Request
    from naoqi_bridge_msgs.action._blink import Blink_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_GetResult_Request(type):
    """Metaclass of message 'Blink_GetResult_Request'."""

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
                'naoqi_bridge_msgs.action.Blink_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_GetResult_Request(metaclass=Metaclass_Blink_GetResult_Request):
    """Message class 'Blink_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_GetResult_Response(type):
    """Metaclass of message 'Blink_GetResult_Response'."""

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
                'naoqi_bridge_msgs.action.Blink_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__get_result__response

            from naoqi_bridge_msgs.action import Blink
            if Blink.Result.__class__._TYPE_SUPPORT is None:
                Blink.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_GetResult_Response(metaclass=Metaclass_Blink_GetResult_Response):
    """Message class 'Blink_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'naoqi_bridge_msgs/Blink_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['naoqi_bridge_msgs', 'action'], 'Blink_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from naoqi_bridge_msgs.action._blink import Blink_Result
        self.result = kwargs.get('result', Blink_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from naoqi_bridge_msgs.action._blink import Blink_Result
            assert \
                isinstance(value, Blink_Result), \
                "The 'result' field must be a sub message of type 'Blink_Result'"
        self._result = value


class Metaclass_Blink_GetResult(type):
    """Metaclass of service 'Blink_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naoqi_bridge_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naoqi_bridge_msgs.action.Blink_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__blink__get_result

            from naoqi_bridge_msgs.action import _blink
            if _blink.Metaclass_Blink_GetResult_Request._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_GetResult_Request.__import_type_support__()
            if _blink.Metaclass_Blink_GetResult_Response._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_GetResult_Response.__import_type_support__()


class Blink_GetResult(metaclass=Metaclass_Blink_GetResult):
    from naoqi_bridge_msgs.action._blink import Blink_GetResult_Request as Request
    from naoqi_bridge_msgs.action._blink import Blink_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Blink_FeedbackMessage(type):
    """Metaclass of message 'Blink_FeedbackMessage'."""

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
                'naoqi_bridge_msgs.action.Blink_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__blink__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__blink__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__blink__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__blink__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__blink__feedback_message

            from naoqi_bridge_msgs.action import Blink
            if Blink.Feedback.__class__._TYPE_SUPPORT is None:
                Blink.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Blink_FeedbackMessage(metaclass=Metaclass_Blink_FeedbackMessage):
    """Message class 'Blink_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'naoqi_bridge_msgs/Blink_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['naoqi_bridge_msgs', 'action'], 'Blink_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from naoqi_bridge_msgs.action._blink import Blink_Feedback
        self.feedback = kwargs.get('feedback', Blink_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from naoqi_bridge_msgs.action._blink import Blink_Feedback
            assert \
                isinstance(value, Blink_Feedback), \
                "The 'feedback' field must be a sub message of type 'Blink_Feedback'"
        self._feedback = value


class Metaclass_Blink(type):
    """Metaclass of action 'Blink'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naoqi_bridge_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naoqi_bridge_msgs.action.Blink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__blink

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from naoqi_bridge_msgs.action import _blink
            if _blink.Metaclass_Blink_SendGoal._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_SendGoal.__import_type_support__()
            if _blink.Metaclass_Blink_GetResult._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_GetResult.__import_type_support__()
            if _blink.Metaclass_Blink_FeedbackMessage._TYPE_SUPPORT is None:
                _blink.Metaclass_Blink_FeedbackMessage.__import_type_support__()


class Blink(metaclass=Metaclass_Blink):

    # The goal message defined in the action definition.
    from naoqi_bridge_msgs.action._blink import Blink_Goal as Goal
    # The result message defined in the action definition.
    from naoqi_bridge_msgs.action._blink import Blink_Result as Result
    # The feedback message defined in the action definition.
    from naoqi_bridge_msgs.action._blink import Blink_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from naoqi_bridge_msgs.action._blink import Blink_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from naoqi_bridge_msgs.action._blink import Blink_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from naoqi_bridge_msgs.action._blink import Blink_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
