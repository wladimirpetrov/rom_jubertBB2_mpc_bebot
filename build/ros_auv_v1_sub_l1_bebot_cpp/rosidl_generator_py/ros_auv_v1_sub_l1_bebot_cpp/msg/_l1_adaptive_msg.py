# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_L1AdaptiveMsg(type):
    """Metaclass of message 'L1AdaptiveMsg'."""

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
                'ros_auv_v1_sub_l1_bebot_cpp.msg.L1AdaptiveMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__l1_adaptive_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__l1_adaptive_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__l1_adaptive_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__l1_adaptive_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__l1_adaptive_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class L1AdaptiveMsg(metaclass=Metaclass_L1AdaptiveMsg):
    """Message class 'L1AdaptiveMsg'."""

    __slots__ = [
        '_x_act',
        '_y_act',
        '_z_act',
        '_roll_act',
        '_pitch_act',
        '_yaw_act',
        '_u_act',
        '_v_act',
        '_w_act',
        '_p_act',
        '_q_act',
        '_r_act',
        '_adap',
        '_delta_v_act',
        '_delta_m_act',
        '_delta_s_act',
        '_zend',
        '_thetaend',
        '_tf',
        '_tend',
        '_t0',
        '_y_aug',
    ]

    _fields_and_field_types = {
        'x_act': 'double',
        'y_act': 'double',
        'z_act': 'double',
        'roll_act': 'double',
        'pitch_act': 'double',
        'yaw_act': 'double',
        'u_act': 'double',
        'v_act': 'double',
        'w_act': 'double',
        'p_act': 'double',
        'q_act': 'double',
        'r_act': 'double',
        'adap': 'double',
        'delta_v_act': 'double',
        'delta_m_act': 'double',
        'delta_s_act': 'double',
        'zend': 'double',
        'thetaend': 'double',
        'tf': 'double',
        'tend': 'double',
        't0': 'double',
        'y_aug': 'double',
    }

    SLOT_TYPES = (
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_act = kwargs.get('x_act', float())
        self.y_act = kwargs.get('y_act', float())
        self.z_act = kwargs.get('z_act', float())
        self.roll_act = kwargs.get('roll_act', float())
        self.pitch_act = kwargs.get('pitch_act', float())
        self.yaw_act = kwargs.get('yaw_act', float())
        self.u_act = kwargs.get('u_act', float())
        self.v_act = kwargs.get('v_act', float())
        self.w_act = kwargs.get('w_act', float())
        self.p_act = kwargs.get('p_act', float())
        self.q_act = kwargs.get('q_act', float())
        self.r_act = kwargs.get('r_act', float())
        self.adap = kwargs.get('adap', float())
        self.delta_v_act = kwargs.get('delta_v_act', float())
        self.delta_m_act = kwargs.get('delta_m_act', float())
        self.delta_s_act = kwargs.get('delta_s_act', float())
        self.zend = kwargs.get('zend', float())
        self.thetaend = kwargs.get('thetaend', float())
        self.tf = kwargs.get('tf', float())
        self.tend = kwargs.get('tend', float())
        self.t0 = kwargs.get('t0', float())
        self.y_aug = kwargs.get('y_aug', float())

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
        if self.x_act != other.x_act:
            return False
        if self.y_act != other.y_act:
            return False
        if self.z_act != other.z_act:
            return False
        if self.roll_act != other.roll_act:
            return False
        if self.pitch_act != other.pitch_act:
            return False
        if self.yaw_act != other.yaw_act:
            return False
        if self.u_act != other.u_act:
            return False
        if self.v_act != other.v_act:
            return False
        if self.w_act != other.w_act:
            return False
        if self.p_act != other.p_act:
            return False
        if self.q_act != other.q_act:
            return False
        if self.r_act != other.r_act:
            return False
        if self.adap != other.adap:
            return False
        if self.delta_v_act != other.delta_v_act:
            return False
        if self.delta_m_act != other.delta_m_act:
            return False
        if self.delta_s_act != other.delta_s_act:
            return False
        if self.zend != other.zend:
            return False
        if self.thetaend != other.thetaend:
            return False
        if self.tf != other.tf:
            return False
        if self.tend != other.tend:
            return False
        if self.t0 != other.t0:
            return False
        if self.y_aug != other.y_aug:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_act(self):
        """Message field 'x_act'."""
        return self._x_act

    @x_act.setter
    def x_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_act' field must be of type 'float'"
        self._x_act = value

    @property
    def y_act(self):
        """Message field 'y_act'."""
        return self._y_act

    @y_act.setter
    def y_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_act' field must be of type 'float'"
        self._y_act = value

    @property
    def z_act(self):
        """Message field 'z_act'."""
        return self._z_act

    @z_act.setter
    def z_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_act' field must be of type 'float'"
        self._z_act = value

    @property
    def roll_act(self):
        """Message field 'roll_act'."""
        return self._roll_act

    @roll_act.setter
    def roll_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_act' field must be of type 'float'"
        self._roll_act = value

    @property
    def pitch_act(self):
        """Message field 'pitch_act'."""
        return self._pitch_act

    @pitch_act.setter
    def pitch_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_act' field must be of type 'float'"
        self._pitch_act = value

    @property
    def yaw_act(self):
        """Message field 'yaw_act'."""
        return self._yaw_act

    @yaw_act.setter
    def yaw_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_act' field must be of type 'float'"
        self._yaw_act = value

    @property
    def u_act(self):
        """Message field 'u_act'."""
        return self._u_act

    @u_act.setter
    def u_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_act' field must be of type 'float'"
        self._u_act = value

    @property
    def v_act(self):
        """Message field 'v_act'."""
        return self._v_act

    @v_act.setter
    def v_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_act' field must be of type 'float'"
        self._v_act = value

    @property
    def w_act(self):
        """Message field 'w_act'."""
        return self._w_act

    @w_act.setter
    def w_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_act' field must be of type 'float'"
        self._w_act = value

    @property
    def p_act(self):
        """Message field 'p_act'."""
        return self._p_act

    @p_act.setter
    def p_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_act' field must be of type 'float'"
        self._p_act = value

    @property
    def q_act(self):
        """Message field 'q_act'."""
        return self._q_act

    @q_act.setter
    def q_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q_act' field must be of type 'float'"
        self._q_act = value

    @property
    def r_act(self):
        """Message field 'r_act'."""
        return self._r_act

    @r_act.setter
    def r_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r_act' field must be of type 'float'"
        self._r_act = value

    @property
    def adap(self):
        """Message field 'adap'."""
        return self._adap

    @adap.setter
    def adap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'adap' field must be of type 'float'"
        self._adap = value

    @property
    def delta_v_act(self):
        """Message field 'delta_v_act'."""
        return self._delta_v_act

    @delta_v_act.setter
    def delta_v_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_v_act' field must be of type 'float'"
        self._delta_v_act = value

    @property
    def delta_m_act(self):
        """Message field 'delta_m_act'."""
        return self._delta_m_act

    @delta_m_act.setter
    def delta_m_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_m_act' field must be of type 'float'"
        self._delta_m_act = value

    @property
    def delta_s_act(self):
        """Message field 'delta_s_act'."""
        return self._delta_s_act

    @delta_s_act.setter
    def delta_s_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_s_act' field must be of type 'float'"
        self._delta_s_act = value

    @property
    def zend(self):
        """Message field 'zend'."""
        return self._zend

    @zend.setter
    def zend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zend' field must be of type 'float'"
        self._zend = value

    @property
    def thetaend(self):
        """Message field 'thetaend'."""
        return self._thetaend

    @thetaend.setter
    def thetaend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thetaend' field must be of type 'float'"
        self._thetaend = value

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
    def y_aug(self):
        """Message field 'y_aug'."""
        return self._y_aug

    @y_aug.setter
    def y_aug(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_aug' field must be of type 'float'"
        self._y_aug = value
