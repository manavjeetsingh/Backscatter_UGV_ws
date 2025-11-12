# generated from rosidl_generator_py/resource/_idl.py.em
# with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OdomRecord_Request(type):
    """Metaclass of message 'OdomRecord_Request'."""

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
                'backscatter_movement_record_msgs_srvs.srv.OdomRecord_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odom_record__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odom_record__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odom_record__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odom_record__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odom_record__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OdomRecord_Request(metaclass=Metaclass_OdomRecord_Request):
    """Message class 'OdomRecord_Request'."""

    __slots__ = [
        '_req',
        '_expmt_name',
        '_backscatter_expmt_flag',
    ]

    _fields_and_field_types = {
        'req': 'boolean',
        'expmt_name': 'string',
        'backscatter_expmt_flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.req = kwargs.get('req', bool())
        self.expmt_name = kwargs.get('expmt_name', str())
        self.backscatter_expmt_flag = kwargs.get('backscatter_expmt_flag', bool())

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
        if self.req != other.req:
            return False
        if self.expmt_name != other.expmt_name:
            return False
        if self.backscatter_expmt_flag != other.backscatter_expmt_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def req(self):
        """Message field 'req'."""
        return self._req

    @req.setter
    def req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'req' field must be of type 'bool'"
        self._req = value

    @property
    def expmt_name(self):
        """Message field 'expmt_name'."""
        return self._expmt_name

    @expmt_name.setter
    def expmt_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'expmt_name' field must be of type 'str'"
        self._expmt_name = value

    @property
    def backscatter_expmt_flag(self):
        """Message field 'backscatter_expmt_flag'."""
        return self._backscatter_expmt_flag

    @backscatter_expmt_flag.setter
    def backscatter_expmt_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'backscatter_expmt_flag' field must be of type 'bool'"
        self._backscatter_expmt_flag = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OdomRecord_Response(type):
    """Metaclass of message 'OdomRecord_Response'."""

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
                'backscatter_movement_record_msgs_srvs.srv.OdomRecord_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odom_record__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odom_record__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odom_record__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odom_record__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odom_record__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OdomRecord_Response(metaclass=Metaclass_OdomRecord_Response):
    """Message class 'OdomRecord_Response'."""

    __slots__ = [
        '_resp',
    ]

    _fields_and_field_types = {
        'resp': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resp = kwargs.get('resp', bool())

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
        if self.resp != other.resp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def resp(self):
        """Message field 'resp'."""
        return self._resp

    @resp.setter
    def resp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'resp' field must be of type 'bool'"
        self._resp = value


class Metaclass_OdomRecord(type):
    """Metaclass of service 'OdomRecord'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('backscatter_movement_record_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'backscatter_movement_record_msgs_srvs.srv.OdomRecord')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__odom_record

            from backscatter_movement_record_msgs_srvs.srv import _odom_record
            if _odom_record.Metaclass_OdomRecord_Request._TYPE_SUPPORT is None:
                _odom_record.Metaclass_OdomRecord_Request.__import_type_support__()
            if _odom_record.Metaclass_OdomRecord_Response._TYPE_SUPPORT is None:
                _odom_record.Metaclass_OdomRecord_Response.__import_type_support__()


class OdomRecord(metaclass=Metaclass_OdomRecord):
    from backscatter_movement_record_msgs_srvs.srv._odom_record import OdomRecord_Request as Request
    from backscatter_movement_record_msgs_srvs.srv._odom_record import OdomRecord_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
