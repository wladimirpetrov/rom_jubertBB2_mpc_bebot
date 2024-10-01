# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'solution_x'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationResult(type):
    """Metaclass of message 'OptimizationResult'."""

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
            module = import_type_support('ros_auv_v1_sub_l1_bebot_cpp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_auv_v1_sub_l1_bebot_cpp.msg.OptimizationResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OptimizationResult(metaclass=Metaclass_OptimizationResult):
    """Message class 'OptimizationResult'."""

    __slots__ = [
        '_solution_x',
        '_final_obj_value',
        '_t0',
        '_tend',
        '_tf',
        '_psi0',
    ]

    _fields_and_field_types = {
        'solution_x': 'sequence<double>',
        'final_obj_value': 'double',
        't0': 'double',
        'tend': 'double',
        'tf': 'double',
        'psi0': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.solution_x = array.array('d', kwargs.get('solution_x', []))
        self.final_obj_value = kwargs.get('final_obj_value', float())
        self.t0 = kwargs.get('t0', float())
        self.tend = kwargs.get('tend', float())
        self.tf = kwargs.get('tf', float())
        self.psi0 = kwargs.get('psi0', float())

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
        if self.solution_x != other.solution_x:
            return False
        if self.final_obj_value != other.final_obj_value:
            return False
        if self.t0 != other.t0:
            return False
        if self.tend != other.tend:
            return False
        if self.tf != other.tf:
            return False
        if self.psi0 != other.psi0:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def solution_x(self):
        """Message field 'solution_x'."""
        return self._solution_x

    @solution_x.setter
    def solution_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'solution_x' array.array() must have the type code of 'd'"
            self._solution_x = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'solution_x' field must be a set or sequence and each value of type 'float'"
        self._solution_x = array.array('d', value)

    @property
    def final_obj_value(self):
        """Message field 'final_obj_value'."""
        return self._final_obj_value

    @final_obj_value.setter
    def final_obj_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_obj_value' field must be of type 'float'"
        self._final_obj_value = value

    @property
    def t0(self):
        """Message field 't0'."""
        return self._t0

    @t0.setter
    def t0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't0' field must be of type 'float'"
        self._t0 = value

    @property
    def tend(self):
        """Message field 'tend'."""
        return self._tend

    @tend.setter
    def tend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tend' field must be of type 'float'"
        self._tend = value

    @property
    def tf(self):
        """Message field 'tf'."""
        return self._tf

    @tf.setter
    def tf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tf' field must be of type 'float'"
        self._tf = value

    @property
    def psi0(self):
        """Message field 'psi0'."""
        return self._psi0

    @psi0.setter
    def psi0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psi0' field must be of type 'float'"
        self._psi0 = value
