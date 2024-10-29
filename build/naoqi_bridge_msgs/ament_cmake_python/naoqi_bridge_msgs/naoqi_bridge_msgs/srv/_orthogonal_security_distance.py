# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naoqi_bridge_msgs:srv/OrthogonalSecurityDistance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OrthogonalSecurityDistance_Request(type):
    """Metaclass of message 'OrthogonalSecurityDistance_Request'."""

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
                'naoqi_bridge_msgs.srv.OrthogonalSecurityDistance_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__orthogonal_security_distance__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__orthogonal_security_distance__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__orthogonal_security_distance__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__orthogonal_security_distance__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__orthogonal_security_distance__request

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OrthogonalSecurityDistance_Request(metaclass=Metaclass_OrthogonalSecurityDistance_Request):
    """Message class 'OrthogonalSecurityDistance_Request'."""

    __slots__ = [
        '_orthogonal_distance',
    ]

    _fields_and_field_types = {
        'orthogonal_distance': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32
        self.orthogonal_distance = kwargs.get('orthogonal_distance', Float32())

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
        if self.orthogonal_distance != other.orthogonal_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def orthogonal_distance(self):
        """Message field 'orthogonal_distance'."""
        return self._orthogonal_distance

    @orthogonal_distance.setter
    def orthogonal_distance(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'orthogonal_distance' field must be a sub message of type 'Float32'"
        self._orthogonal_distance = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OrthogonalSecurityDistance_Response(type):
    """Metaclass of message 'OrthogonalSecurityDistance_Response'."""

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
                'naoqi_bridge_msgs.srv.OrthogonalSecurityDistance_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__orthogonal_security_distance__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__orthogonal_security_distance__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__orthogonal_security_distance__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__orthogonal_security_distance__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__orthogonal_security_distance__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OrthogonalSecurityDistance_Response(metaclass=Metaclass_OrthogonalSecurityDistance_Response):
    """Message class 'OrthogonalSecurityDistance_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_OrthogonalSecurityDistance(type):
    """Metaclass of service 'OrthogonalSecurityDistance'."""

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
                'naoqi_bridge_msgs.srv.OrthogonalSecurityDistance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__orthogonal_security_distance

            from naoqi_bridge_msgs.srv import _orthogonal_security_distance
            if _orthogonal_security_distance.Metaclass_OrthogonalSecurityDistance_Request._TYPE_SUPPORT is None:
                _orthogonal_security_distance.Metaclass_OrthogonalSecurityDistance_Request.__import_type_support__()
            if _orthogonal_security_distance.Metaclass_OrthogonalSecurityDistance_Response._TYPE_SUPPORT is None:
                _orthogonal_security_distance.Metaclass_OrthogonalSecurityDistance_Response.__import_type_support__()


class OrthogonalSecurityDistance(metaclass=Metaclass_OrthogonalSecurityDistance):
    from naoqi_bridge_msgs.srv._orthogonal_security_distance import OrthogonalSecurityDistance_Request as Request
    from naoqi_bridge_msgs.srv._orthogonal_security_distance import OrthogonalSecurityDistance_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
