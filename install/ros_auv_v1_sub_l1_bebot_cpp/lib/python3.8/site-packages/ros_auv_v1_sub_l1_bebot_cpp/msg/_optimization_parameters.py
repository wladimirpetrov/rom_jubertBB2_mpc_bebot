# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'a_flat'
# Member 'b_flat'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationParameters(type):
    """Metaclass of message 'OptimizationParameters'."""

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
                'ros_auv_v1_sub_l1_bebot_cpp.msg.OptimizationParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OptimizationParameters(metaclass=Metaclass_OptimizationParameters):
    """Message class 'OptimizationParameters'."""

    __slots__ = [
        '_n',
        '_tf',
        '_delta_v_max',
        '_delta_v_min',
        '_delta_s_max',
        '_delta_s_min',
        '_delta_m_max',
        '_delta_m_min',
        '_zmax',
        '_zmin',
        '_wmax',
        '_wmin',
        '_thetamax',
        '_thetamin',
        '_qmax',
        '_qmin',
        '_z0',
        '_w0',
        '_theta0',
        '_q0',
        '_delta_v0',
        '_delta_m0',
        '_delta_s0',
        '_zf',
        '_thetaf',
        '_a_flat',
        '_b_flat',
        '_t0',
        '_tend',
        '_psi0',
    ]

    _fields_and_field_types = {
        'n': 'int32',
        'tf': 'double',
        'delta_v_max': 'double',
        'delta_v_min': 'double',
        'delta_s_max': 'double',
        'delta_s_min': 'double',
        'delta_m_max': 'double',
        'delta_m_min': 'double',
        'zmax': 'double',
        'zmin': 'double',
        'wmax': 'double',
        'wmin': 'double',
        'thetamax': 'double',
        'thetamin': 'double',
        'qmax': 'double',
        'qmin': 'double',
        'z0': 'double',
        'w0': 'double',
        'theta0': 'double',
        'q0': 'double',
        'delta_v0': 'double',
        'delta_m0': 'double',
        'delta_s0': 'double',
        'zf': 'double',
        'thetaf': 'double',
        'a_flat': 'sequence<double>',
        'b_flat': 'sequence<double>',
        't0': 'double',
        'tend': 'double',
        'psi0': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n = kwargs.get('n', int())
        self.tf = kwargs.get('tf', float())
        self.delta_v_max = kwargs.get('delta_v_max', float())
        self.delta_v_min = kwargs.get('delta_v_min', float())
        self.delta_s_max = kwargs.get('delta_s_max', float())
        self.delta_s_min = kwargs.get('delta_s_min', float())
        self.delta_m_max = kwargs.get('delta_m_max', float())
        self.delta_m_min = kwargs.get('delta_m_min', float())
        self.zmax = kwargs.get('zmax', float())
        self.zmin = kwargs.get('zmin', float())
        self.wmax = kwargs.get('wmax', float())
        self.wmin = kwargs.get('wmin', float())
        self.thetamax = kwargs.get('thetamax', float())
        self.thetamin = kwargs.get('thetamin', float())
        self.qmax = kwargs.get('qmax', float())
        self.qmin = kwargs.get('qmin', float())
        self.z0 = kwargs.get('z0', float())
        self.w0 = kwargs.get('w0', float())
        self.theta0 = kwargs.get('theta0', float())
        self.q0 = kwargs.get('q0', float())
        self.delta_v0 = kwargs.get('delta_v0', float())
        self.delta_m0 = kwargs.get('delta_m0', float())
        self.delta_s0 = kwargs.get('delta_s0', float())
        self.zf = kwargs.get('zf', float())
        self.thetaf = kwargs.get('thetaf', float())
        self.a_flat = array.array('d', kwargs.get('a_flat', []))
        self.b_flat = array.array('d', kwargs.get('b_flat', []))
        self.t0 = kwargs.get('t0', float())
        self.tend = kwargs.get('tend', float())
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
        if self.n != other.n:
            return False
        if self.tf != other.tf:
            return False
        if self.delta_v_max != other.delta_v_max:
            return False
        if self.delta_v_min != other.delta_v_min:
            return False
        if self.delta_s_max != other.delta_s_max:
            return False
        if self.delta_s_min != other.delta_s_min:
            return False
        if self.delta_m_max != other.delta_m_max:
            return False
        if self.delta_m_min != other.delta_m_min:
            return False
        if self.zmax != other.zmax:
            return False
        if self.zmin != other.zmin:
            return False
        if self.wmax != other.wmax:
            return False
        if self.wmin != other.wmin:
            return False
        if self.thetamax != other.thetamax:
            return False
        if self.thetamin != other.thetamin:
            return False
        if self.qmax != other.qmax:
            return False
        if self.qmin != other.qmin:
            return False
        if self.z0 != other.z0:
            return False
        if self.w0 != other.w0:
            return False
        if self.theta0 != other.theta0:
            return False
        if self.q0 != other.q0:
            return False
        if self.delta_v0 != other.delta_v0:
            return False
        if self.delta_m0 != other.delta_m0:
            return False
        if self.delta_s0 != other.delta_s0:
            return False
        if self.zf != other.zf:
            return False
        if self.thetaf != other.thetaf:
            return False
        if self.a_flat != other.a_flat:
            return False
        if self.b_flat != other.b_flat:
            return False
        if self.t0 != other.t0:
            return False
        if self.tend != other.tend:
            return False
        if self.psi0 != other.psi0:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n' field must be an integer in [-2147483648, 2147483647]"
        self._n = value

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
    def delta_v_max(self):
        """Message field 'delta_v_max'."""
        return self._delta_v_max

    @delta_v_max.setter
    def delta_v_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_v_max' field must be of type 'float'"
        self._delta_v_max = value

    @property
    def delta_v_min(self):
        """Message field 'delta_v_min'."""
        return self._delta_v_min

    @delta_v_min.setter
    def delta_v_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_v_min' field must be of type 'float'"
        self._delta_v_min = value

    @property
    def delta_s_max(self):
        """Message field 'delta_s_max'."""
        return self._delta_s_max

    @delta_s_max.setter
    def delta_s_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_s_max' field must be of type 'float'"
        self._delta_s_max = value

    @property
    def delta_s_min(self):
        """Message field 'delta_s_min'."""
        return self._delta_s_min

    @delta_s_min.setter
    def delta_s_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_s_min' field must be of type 'float'"
        self._delta_s_min = value

    @property
    def delta_m_max(self):
        """Message field 'delta_m_max'."""
        return self._delta_m_max

    @delta_m_max.setter
    def delta_m_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_m_max' field must be of type 'float'"
        self._delta_m_max = value

    @property
    def delta_m_min(self):
        """Message field 'delta_m_min'."""
        return self._delta_m_min

    @delta_m_min.setter
    def delta_m_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_m_min' field must be of type 'float'"
        self._delta_m_min = value

    @property
    def zmax(self):
        """Message field 'zmax'."""
        return self._zmax

    @zmax.setter
    def zmax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zmax' field must be of type 'float'"
        self._zmax = value

    @property
    def zmin(self):
        """Message field 'zmin'."""
        return self._zmin

    @zmin.setter
    def zmin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zmin' field must be of type 'float'"
        self._zmin = value

    @property
    def wmax(self):
        """Message field 'wmax'."""
        return self._wmax

    @wmax.setter
    def wmax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wmax' field must be of type 'float'"
        self._wmax = value

    @property
    def wmin(self):
        """Message field 'wmin'."""
        return self._wmin

    @wmin.setter
    def wmin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wmin' field must be of type 'float'"
        self._wmin = value

    @property
    def thetamax(self):
        """Message field 'thetamax'."""
        return self._thetamax

    @thetamax.setter
    def thetamax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thetamax' field must be of type 'float'"
        self._thetamax = value

    @property
    def thetamin(self):
        """Message field 'thetamin'."""
        return self._thetamin

    @thetamin.setter
    def thetamin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thetamin' field must be of type 'float'"
        self._thetamin = value

    @property
    def qmax(self):
        """Message field 'qmax'."""
        return self._qmax

    @qmax.setter
    def qmax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'qmax' field must be of type 'float'"
        self._qmax = value

    @property
    def qmin(self):
        """Message field 'qmin'."""
        return self._qmin

    @qmin.setter
    def qmin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'qmin' field must be of type 'float'"
        self._qmin = value

    @property
    def z0(self):
        """Message field 'z0'."""
        return self._z0

    @z0.setter
    def z0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z0' field must be of type 'float'"
        self._z0 = value

    @property
    def w0(self):
        """Message field 'w0'."""
        return self._w0

    @w0.setter
    def w0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w0' field must be of type 'float'"
        self._w0 = value

    @property
    def theta0(self):
        """Message field 'theta0'."""
        return self._theta0

    @theta0.setter
    def theta0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta0' field must be of type 'float'"
        self._theta0 = value

    @property
    def q0(self):
        """Message field 'q0'."""
        return self._q0

    @q0.setter
    def q0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q0' field must be of type 'float'"
        self._q0 = value

    @property
    def delta_v0(self):
        """Message field 'delta_v0'."""
        return self._delta_v0

    @delta_v0.setter
    def delta_v0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_v0' field must be of type 'float'"
        self._delta_v0 = value

    @property
    def delta_m0(self):
        """Message field 'delta_m0'."""
        return self._delta_m0

    @delta_m0.setter
    def delta_m0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_m0' field must be of type 'float'"
        self._delta_m0 = value

    @property
    def delta_s0(self):
        """Message field 'delta_s0'."""
        return self._delta_s0

    @delta_s0.setter
    def delta_s0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_s0' field must be of type 'float'"
        self._delta_s0 = value

    @property
    def zf(self):
        """Message field 'zf'."""
        return self._zf

    @zf.setter
    def zf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zf' field must be of type 'float'"
        self._zf = value

    @property
    def thetaf(self):
        """Message field 'thetaf'."""
        return self._thetaf

    @thetaf.setter
    def thetaf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thetaf' field must be of type 'float'"
        self._thetaf = value

    @property
    def a_flat(self):
        """Message field 'a_flat'."""
        return self._a_flat

    @a_flat.setter
    def a_flat(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'a_flat' array.array() must have the type code of 'd'"
            self._a_flat = value
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
                "The 'a_flat' field must be a set or sequence and each value of type 'float'"
        self._a_flat = array.array('d', value)

    @property
    def b_flat(self):
        """Message field 'b_flat'."""
        return self._b_flat

    @b_flat.setter
    def b_flat(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'b_flat' array.array() must have the type code of 'd'"
            self._b_flat = value
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
                "The 'b_flat' field must be a set or sequence and each value of type 'float'"
        self._b_flat = array.array('d', value)

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
