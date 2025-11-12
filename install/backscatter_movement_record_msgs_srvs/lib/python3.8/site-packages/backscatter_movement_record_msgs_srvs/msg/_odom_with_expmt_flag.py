# generated from rosidl_generator_py/resource/_idl.py.em
# with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OdomWithExpmtFlag(type):
    """Metaclass of message 'OdomWithExpmtFlag'."""

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
            module = import_type_support('backscatter_movement_record_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'backscatter_movement_record_msgs_srvs.msg.OdomWithExpmtFlag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odom_with_expmt_flag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odom_with_expmt_flag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odom_with_expmt_flag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odom_with_expmt_flag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odom_with_expmt_flag

            from nav_msgs.msg import Odometry
            if Odometry.__class__._TYPE_SUPPORT is None:
                Odometry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OdomWithExpmtFlag(metaclass=Metaclass_OdomWithExpmtFlag):
    """Message class 'OdomWithExpmtFlag'."""

    __slots__ = [
        '_odom',
        '_expmt_flag',
    ]

    _fields_and_field_types = {
        'odom': 'nav_msgs/Odometry',
        'expmt_flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Odometry
        self.odom = kwargs.get('odom', Odometry())
        self.expmt_flag = kwargs.get('expmt_flag', bool())

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
        if self.odom != other.odom:
            return False
        if self.expmt_flag != other.expmt_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def odom(self):
        """Message field 'odom'."""
        return self._odom

    @odom.setter
    def odom(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'odom' field must be a sub message of type 'Odometry'"
        self._odom = value

    @property
    def expmt_flag(self):
        """Message field 'expmt_flag'."""
        return self._expmt_flag

    @expmt_flag.setter
    def expmt_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'expmt_flag' field must be of type 'bool'"
        self._expmt_flag = value
