/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
#/* Revised by Edward Diener (2020) */
#
#/* See http://www.boost.org for most recent version. */
#
#include <boost/preprocessor/config/config.hpp>
#
#if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#
#if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#include <boost/preprocessor/detail/dmc/auto_rec.hpp>
#else
#
#ifndef BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#define BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#
#include <boost/preprocessor/control/iif.hpp>
#
#/* BOOST_PP_AUTO_REC */
#
#define BOOST_PP_AUTO_REC(pred, n) BOOST_PP_NODE_ENTRY_##n(pred)
#
#define BOOST_PP_NODE_ENTRY_256(p) BOOST_PP_NODE_128(p)(p)(p)(p)(p)(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_128(p) BOOST_PP_NODE_64(p)(p)(p)(p)(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_64(p) BOOST_PP_NODE_32(p)(p)(p)(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_32(p) BOOST_PP_NODE_16(p)(p)(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_16(p) BOOST_PP_NODE_8(p)(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_8(p) BOOST_PP_NODE_4(p)(p)(p)
#define BOOST_PP_NODE_ENTRY_4(p) BOOST_PP_NODE_2(p)(p)
#define BOOST_PP_NODE_ENTRY_2(p) BOOST_PP_NODE_1(p)
#
#define BOOST_PP_NODE_128(p)                                                   \
  BOOST_PP_IIF(p(128), BOOST_PP_NODE_64, BOOST_PP_NODE_192)
#define BOOST_PP_NODE_64(p)                                                    \
  BOOST_PP_IIF(p(64), BOOST_PP_NODE_32, BOOST_PP_NODE_96)
#define BOOST_PP_NODE_32(p)                                                    \
  BOOST_PP_IIF(p(32), BOOST_PP_NODE_16, BOOST_PP_NODE_48)
#define BOOST_PP_NODE_16(p)                                                    \
  BOOST_PP_IIF(p(16), BOOST_PP_NODE_8, BOOST_PP_NODE_24)
#define BOOST_PP_NODE_8(p) BOOST_PP_IIF(p(8), BOOST_PP_NODE_4, BOOST_PP_NODE_12)
#define BOOST_PP_NODE_4(p) BOOST_PP_IIF(p(4), BOOST_PP_NODE_2, BOOST_PP_NODE_6)
#define BOOST_PP_NODE_2(p) BOOST_PP_IIF(p(2), BOOST_PP_NODE_1, BOOST_PP_NODE_3)
#define BOOST_PP_NODE_1(p) BOOST_PP_IIF(p(1), 1, 2)
#define BOOST_PP_NODE_3(p) BOOST_PP_IIF(p(3), 3, 4)
#define BOOST_PP_NODE_6(p) BOOST_PP_IIF(p(6), BOOST_PP_NODE_5, BOOST_PP_NODE_7)
#define BOOST_PP_NODE_5(p) BOOST_PP_IIF(p(5), 5, 6)
#define BOOST_PP_NODE_7(p) BOOST_PP_IIF(p(7), 7, 8)
#define BOOST_PP_NODE_12(p)                                                    \
  BOOST_PP_IIF(p(12), BOOST_PP_NODE_10, BOOST_PP_NODE_14)
#define BOOST_PP_NODE_10(p)                                                    \
  BOOST_PP_IIF(p(10), BOOST_PP_NODE_9, BOOST_PP_NODE_11)
#define BOOST_PP_NODE_9(p) BOOST_PP_IIF(p(9), 9, 10)
#define BOOST_PP_NODE_11(p) BOOST_PP_IIF(p(11), 11, 12)
#define BOOST_PP_NODE_14(p)                                                    \
  BOOST_PP_IIF(p(14), BOOST_PP_NODE_13, BOOST_PP_NODE_15)
#define BOOST_PP_NODE_13(p) BOOST_PP_IIF(p(13), 13, 14)
#define BOOST_PP_NODE_15(p) BOOST_PP_IIF(p(15), 15, 16)
#define BOOST_PP_NODE_24(p)                                                    \
  BOOST_PP_IIF(p(24), BOOST_PP_NODE_20, BOOST_PP_NODE_28)
#define BOOST_PP_NODE_20(p)                                                    \
  BOOST_PP_IIF(p(20), BOOST_PP_NODE_18, BOOST_PP_NODE_22)
#define BOOST_PP_NODE_18(p)                                                    \
  BOOST_PP_IIF(p(18), BOOST_PP_NODE_17, BOOST_PP_NODE_19)
#define BOOST_PP_NODE_17(p) BOOST_PP_IIF(p(17), 17, 18)
#define BOOST_PP_NODE_19(p) BOOST_PP_IIF(p(19), 19, 20)
#define BOOST_PP_NODE_22(p)                                                    \
  BOOST_PP_IIF(p(22), BOOST_PP_NODE_21, BOOST_PP_NODE_23)
#define BOOST_PP_NODE_21(p) BOOST_PP_IIF(p(21), 21, 22)
#define BOOST_PP_NODE_23(p) BOOST_PP_IIF(p(23), 23, 24)
#define BOOST_PP_NODE_28(p)                                                    \
  BOOST_PP_IIF(p(28), BOOST_PP_NODE_26, BOOST_PP_NODE_30)
#define BOOST_PP_NODE_26(p)                                                    \
  BOOST_PP_IIF(p(26), BOOST_PP_NODE_25, BOOST_PP_NODE_27)
#define BOOST_PP_NODE_25(p) BOOST_PP_IIF(p(25), 25, 26)
#define BOOST_PP_NODE_27(p) BOOST_PP_IIF(p(27), 27, 28)
#define BOOST_PP_NODE_30(p)                                                    \
  BOOST_PP_IIF(p(30), BOOST_PP_NODE_29, BOOST_PP_NODE_31)
#define BOOST_PP_NODE_29(p) BOOST_PP_IIF(p(29), 29, 30)
#define BOOST_PP_NODE_31(p) BOOST_PP_IIF(p(31), 31, 32)
#define BOOST_PP_NODE_48(p)                                                    \
  BOOST_PP_IIF(p(48), BOOST_PP_NODE_40, BOOST_PP_NODE_56)
#define BOOST_PP_NODE_40(p)                                                    \
  BOOST_PP_IIF(p(40), BOOST_PP_NODE_36, BOOST_PP_NODE_44)
#define BOOST_PP_NODE_36(p)                                                    \
  BOOST_PP_IIF(p(36), BOOST_PP_NODE_34, BOOST_PP_NODE_38)
#define BOOST_PP_NODE_34(p)                                                    \
  BOOST_PP_IIF(p(34), BOOST_PP_NODE_33, BOOST_PP_NODE_35)
#define BOOST_PP_NODE_33(p) BOOST_PP_IIF(p(33), 33, 34)
#define BOOST_PP_NODE_35(p) BOOST_PP_IIF(p(35), 35, 36)
#define BOOST_PP_NODE_38(p)                                                    \
  BOOST_PP_IIF(p(38), BOOST_PP_NODE_37, BOOST_PP_NODE_39)
#define BOOST_PP_NODE_37(p) BOOST_PP_IIF(p(37), 37, 38)
#define BOOST_PP_NODE_39(p) BOOST_PP_IIF(p(39), 39, 40)
#define BOOST_PP_NODE_44(p)                                                    \
  BOOST_PP_IIF(p(44), BOOST_PP_NODE_42, BOOST_PP_NODE_46)
#define BOOST_PP_NODE_42(p)                                                    \
  BOOST_PP_IIF(p(42), BOOST_PP_NODE_41, BOOST_PP_NODE_43)
#define BOOST_PP_NODE_41(p) BOOST_PP_IIF(p(41), 41, 42)
#define BOOST_PP_NODE_43(p) BOOST_PP_IIF(p(43), 43, 44)
#define BOOST_PP_NODE_46(p)                                                    \
  BOOST_PP_IIF(p(46), BOOST_PP_NODE_45, BOOST_PP_NODE_47)
#define BOOST_PP_NODE_45(p) BOOST_PP_IIF(p(45), 45, 46)
#define BOOST_PP_NODE_47(p) BOOST_PP_IIF(p(47), 47, 48)
#define BOOST_PP_NODE_56(p)                                                    \
  BOOST_PP_IIF(p(56), BOOST_PP_NODE_52, BOOST_PP_NODE_60)
#define BOOST_PP_NODE_52(p)                                                    \
  BOOST_PP_IIF(p(52), BOOST_PP_NODE_50, BOOST_PP_NODE_54)
#define BOOST_PP_NODE_50(p)                                                    \
  BOOST_PP_IIF(p(50), BOOST_PP_NODE_49, BOOST_PP_NODE_51)
#define BOOST_PP_NODE_49(p) BOOST_PP_IIF(p(49), 49, 50)
#define BOOST_PP_NODE_51(p) BOOST_PP_IIF(p(51), 51, 52)
#define BOOST_PP_NODE_54(p)                                                    \
  BOOST_PP_IIF(p(54), BOOST_PP_NODE_53, BOOST_PP_NODE_55)
#define BOOST_PP_NODE_53(p) BOOST_PP_IIF(p(53), 53, 54)
#define BOOST_PP_NODE_55(p) BOOST_PP_IIF(p(55), 55, 56)
#define BOOST_PP_NODE_60(p)                                                    \
  BOOST_PP_IIF(p(60), BOOST_PP_NODE_58, BOOST_PP_NODE_62)
#define BOOST_PP_NODE_58(p)                                                    \
  BOOST_PP_IIF(p(58), BOOST_PP_NODE_57, BOOST_PP_NODE_59)
#define BOOST_PP_NODE_57(p) BOOST_PP_IIF(p(57), 57, 58)
#define BOOST_PP_NODE_59(p) BOOST_PP_IIF(p(59), 59, 60)
#define BOOST_PP_NODE_62(p)                                                    \
  BOOST_PP_IIF(p(62), BOOST_PP_NODE_61, BOOST_PP_NODE_63)
#define BOOST_PP_NODE_61(p) BOOST_PP_IIF(p(61), 61, 62)
#define BOOST_PP_NODE_63(p) BOOST_PP_IIF(p(63), 63, 64)
#define BOOST_PP_NODE_96(p)                                                    \
  BOOST_PP_IIF(p(96), BOOST_PP_NODE_80, BOOST_PP_NODE_112)
#define BOOST_PP_NODE_80(p)                                                    \
  BOOST_PP_IIF(p(80), BOOST_PP_NODE_72, BOOST_PP_NODE_88)
#define BOOST_PP_NODE_72(p)                                                    \
  BOOST_PP_IIF(p(72), BOOST_PP_NODE_68, BOOST_PP_NODE_76)
#define BOOST_PP_NODE_68(p)                                                    \
  BOOST_PP_IIF(p(68), BOOST_PP_NODE_66, BOOST_PP_NODE_70)
#define BOOST_PP_NODE_66(p)                                                    \
  BOOST_PP_IIF(p(66), BOOST_PP_NODE_65, BOOST_PP_NODE_67)
#define BOOST_PP_NODE_65(p) BOOST_PP_IIF(p(65), 65, 66)
#define BOOST_PP_NODE_67(p) BOOST_PP_IIF(p(67), 67, 68)
#define BOOST_PP_NODE_70(p)                                                    \
  BOOST_PP_IIF(p(70), BOOST_PP_NODE_69, BOOST_PP_NODE_71)
#define BOOST_PP_NODE_69(p) BOOST_PP_IIF(p(69), 69, 70)
#define BOOST_PP_NODE_71(p) BOOST_PP_IIF(p(71), 71, 72)
#define BOOST_PP_NODE_76(p)                                                    \
  BOOST_PP_IIF(p(76), BOOST_PP_NODE_74, BOOST_PP_NODE_78)
#define BOOST_PP_NODE_74(p)                                                    \
  BOOST_PP_IIF(p(74), BOOST_PP_NODE_73, BOOST_PP_NODE_75)
#define BOOST_PP_NODE_73(p) BOOST_PP_IIF(p(73), 73, 74)
#define BOOST_PP_NODE_75(p) BOOST_PP_IIF(p(75), 75, 76)
#define BOOST_PP_NODE_78(p)                                                    \
  BOOST_PP_IIF(p(78), BOOST_PP_NODE_77, BOOST_PP_NODE_79)
#define BOOST_PP_NODE_77(p) BOOST_PP_IIF(p(77), 77, 78)
#define BOOST_PP_NODE_79(p) BOOST_PP_IIF(p(79), 79, 80)
#define BOOST_PP_NODE_88(p)                                                    \
  BOOST_PP_IIF(p(88), BOOST_PP_NODE_84, BOOST_PP_NODE_92)
#define BOOST_PP_NODE_84(p)                                                    \
  BOOST_PP_IIF(p(84), BOOST_PP_NODE_82, BOOST_PP_NODE_86)
#define BOOST_PP_NODE_82(p)                                                    \
  BOOST_PP_IIF(p(82), BOOST_PP_NODE_81, BOOST_PP_NODE_83)
#define BOOST_PP_NODE_81(p) BOOST_PP_IIF(p(81), 81, 82)
#define BOOST_PP_NODE_83(p) BOOST_PP_IIF(p(83), 83, 84)
#define BOOST_PP_NODE_86(p)                                                    \
  BOOST_PP_IIF(p(86), BOOST_PP_NODE_85, BOOST_PP_NODE_87)
#define BOOST_PP_NODE_85(p) BOOST_PP_IIF(p(85), 85, 86)
#define BOOST_PP_NODE_87(p) BOOST_PP_IIF(p(87), 87, 88)
#define BOOST_PP_NODE_92(p)                                                    \
  BOOST_PP_IIF(p(92), BOOST_PP_NODE_90, BOOST_PP_NODE_94)
#define BOOST_PP_NODE_90(p)                                                    \
  BOOST_PP_IIF(p(90), BOOST_PP_NODE_89, BOOST_PP_NODE_91)
#define BOOST_PP_NODE_89(p) BOOST_PP_IIF(p(89), 89, 90)
#define BOOST_PP_NODE_91(p) BOOST_PP_IIF(p(91), 91, 92)
#define BOOST_PP_NODE_94(p)                                                    \
  BOOST_PP_IIF(p(94), BOOST_PP_NODE_93, BOOST_PP_NODE_95)
#define BOOST_PP_NODE_93(p) BOOST_PP_IIF(p(93), 93, 94)
#define BOOST_PP_NODE_95(p) BOOST_PP_IIF(p(95), 95, 96)
#define BOOST_PP_NODE_112(p)                                                   \
  BOOST_PP_IIF(p(112), BOOST_PP_NODE_104, BOOST_PP_NODE_120)
#define BOOST_PP_NODE_104(p)                                                   \
  BOOST_PP_IIF(p(104), BOOST_PP_NODE_100, BOOST_PP_NODE_108)
#define BOOST_PP_NODE_100(p)                                                   \
  BOOST_PP_IIF(p(100), BOOST_PP_NODE_98, BOOST_PP_NODE_102)
#define BOOST_PP_NODE_98(p)                                                    \
  BOOST_PP_IIF(p(98), BOOST_PP_NODE_97, BOOST_PP_NODE_99)
#define BOOST_PP_NODE_97(p) BOOST_PP_IIF(p(97), 97, 98)
#define BOOST_PP_NODE_99(p) BOOST_PP_IIF(p(99), 99, 100)
#define BOOST_PP_NODE_102(p)                                                   \
  BOOST_PP_IIF(p(102), BOOST_PP_NODE_101, BOOST_PP_NODE_103)
#define BOOST_PP_NODE_101(p) BOOST_PP_IIF(p(101), 101, 102)
#define BOOST_PP_NODE_103(p) BOOST_PP_IIF(p(103), 103, 104)
#define BOOST_PP_NODE_108(p)                                                   \
  BOOST_PP_IIF(p(108), BOOST_PP_NODE_106, BOOST_PP_NODE_110)
#define BOOST_PP_NODE_106(p)                                                   \
  BOOST_PP_IIF(p(106), BOOST_PP_NODE_105, BOOST_PP_NODE_107)
#define BOOST_PP_NODE_105(p) BOOST_PP_IIF(p(105), 105, 106)
#define BOOST_PP_NODE_107(p) BOOST_PP_IIF(p(107), 107, 108)
#define BOOST_PP_NODE_110(p)                                                   \
  BOOST_PP_IIF(p(110), BOOST_PP_NODE_109, BOOST_PP_NODE_111)
#define BOOST_PP_NODE_109(p) BOOST_PP_IIF(p(109), 109, 110)
#define BOOST_PP_NODE_111(p) BOOST_PP_IIF(p(111), 111, 112)
#define BOOST_PP_NODE_120(p)                                                   \
  BOOST_PP_IIF(p(120), BOOST_PP_NODE_116, BOOST_PP_NODE_124)
#define BOOST_PP_NODE_116(p)                                                   \
  BOOST_PP_IIF(p(116), BOOST_PP_NODE_114, BOOST_PP_NODE_118)
#define BOOST_PP_NODE_114(p)                                                   \
  BOOST_PP_IIF(p(114), BOOST_PP_NODE_113, BOOST_PP_NODE_115)
#define BOOST_PP_NODE_113(p) BOOST_PP_IIF(p(113), 113, 114)
#define BOOST_PP_NODE_115(p) BOOST_PP_IIF(p(115), 115, 116)
#define BOOST_PP_NODE_118(p)                                                   \
  BOOST_PP_IIF(p(118), BOOST_PP_NODE_117, BOOST_PP_NODE_119)
#define BOOST_PP_NODE_117(p) BOOST_PP_IIF(p(117), 117, 118)
#define BOOST_PP_NODE_119(p) BOOST_PP_IIF(p(119), 119, 120)
#define BOOST_PP_NODE_124(p)                                                   \
  BOOST_PP_IIF(p(124), BOOST_PP_NODE_122, BOOST_PP_NODE_126)
#define BOOST_PP_NODE_122(p)                                                   \
  BOOST_PP_IIF(p(122), BOOST_PP_NODE_121, BOOST_PP_NODE_123)
#define BOOST_PP_NODE_121(p) BOOST_PP_IIF(p(121), 121, 122)
#define BOOST_PP_NODE_123(p) BOOST_PP_IIF(p(123), 123, 124)
#define BOOST_PP_NODE_126(p)                                                   \
  BOOST_PP_IIF(p(126), BOOST_PP_NODE_125, BOOST_PP_NODE_127)
#define BOOST_PP_NODE_125(p) BOOST_PP_IIF(p(125), 125, 126)
#define BOOST_PP_NODE_127(p) BOOST_PP_IIF(p(127), 127, 128)
#define BOOST_PP_NODE_192(p)                                                   \
  BOOST_PP_IIF(p(192), BOOST_PP_NODE_160, BOOST_PP_NODE_224)
#define BOOST_PP_NODE_160(p)                                                   \
  BOOST_PP_IIF(p(160), BOOST_PP_NODE_144, BOOST_PP_NODE_176)
#define BOOST_PP_NODE_144(p)                                                   \
  BOOST_PP_IIF(p(144), BOOST_PP_NODE_136, BOOST_PP_NODE_152)
#define BOOST_PP_NODE_136(p)                                                   \
  BOOST_PP_IIF(p(136), BOOST_PP_NODE_132, BOOST_PP_NODE_140)
#define BOOST_PP_NODE_132(p)                                                   \
  BOOST_PP_IIF(p(132), BOOST_PP_NODE_130, BOOST_PP_NODE_134)
#define BOOST_PP_NODE_130(p)                                                   \
  BOOST_PP_IIF(p(130), BOOST_PP_NODE_129, BOOST_PP_NODE_131)
#define BOOST_PP_NODE_129(p) BOOST_PP_IIF(p(129), 129, 130)
#define BOOST_PP_NODE_131(p) BOOST_PP_IIF(p(131), 131, 132)
#define BOOST_PP_NODE_134(p)                                                   \
  BOOST_PP_IIF(p(134), BOOST_PP_NODE_133, BOOST_PP_NODE_135)
#define BOOST_PP_NODE_133(p) BOOST_PP_IIF(p(133), 133, 134)
#define BOOST_PP_NODE_135(p) BOOST_PP_IIF(p(135), 135, 136)
#define BOOST_PP_NODE_140(p)                                                   \
  BOOST_PP_IIF(p(140), BOOST_PP_NODE_138, BOOST_PP_NODE_142)
#define BOOST_PP_NODE_138(p)                                                   \
  BOOST_PP_IIF(p(138), BOOST_PP_NODE_137, BOOST_PP_NODE_139)
#define BOOST_PP_NODE_137(p) BOOST_PP_IIF(p(137), 137, 138)
#define BOOST_PP_NODE_139(p) BOOST_PP_IIF(p(139), 139, 140)
#define BOOST_PP_NODE_142(p)                                                   \
  BOOST_PP_IIF(p(142), BOOST_PP_NODE_141, BOOST_PP_NODE_143)
#define BOOST_PP_NODE_141(p) BOOST_PP_IIF(p(141), 141, 142)
#define BOOST_PP_NODE_143(p) BOOST_PP_IIF(p(143), 143, 144)
#define BOOST_PP_NODE_152(p)                                                   \
  BOOST_PP_IIF(p(152), BOOST_PP_NODE_148, BOOST_PP_NODE_156)
#define BOOST_PP_NODE_148(p)                                                   \
  BOOST_PP_IIF(p(148), BOOST_PP_NODE_146, BOOST_PP_NODE_150)
#define BOOST_PP_NODE_146(p)                                                   \
  BOOST_PP_IIF(p(146), BOOST_PP_NODE_145, BOOST_PP_NODE_147)
#define BOOST_PP_NODE_145(p) BOOST_PP_IIF(p(145), 145, 146)
#define BOOST_PP_NODE_147(p) BOOST_PP_IIF(p(147), 147, 148)
#define BOOST_PP_NODE_150(p)                                                   \
  BOOST_PP_IIF(p(150), BOOST_PP_NODE_149, BOOST_PP_NODE_151)
#define BOOST_PP_NODE_149(p) BOOST_PP_IIF(p(149), 149, 150)
#define BOOST_PP_NODE_151(p) BOOST_PP_IIF(p(151), 151, 152)
#define BOOST_PP_NODE_156(p)                                                   \
  BOOST_PP_IIF(p(156), BOOST_PP_NODE_154, BOOST_PP_NODE_158)
#define BOOST_PP_NODE_154(p)                                                   \
  BOOST_PP_IIF(p(154), BOOST_PP_NODE_153, BOOST_PP_NODE_155)
#define BOOST_PP_NODE_153(p) BOOST_PP_IIF(p(153), 153, 154)
#define BOOST_PP_NODE_155(p) BOOST_PP_IIF(p(155), 155, 156)
#define BOOST_PP_NODE_158(p)                                                   \
  BOOST_PP_IIF(p(158), BOOST_PP_NODE_157, BOOST_PP_NODE_159)
#define BOOST_PP_NODE_157(p) BOOST_PP_IIF(p(157), 157, 158)
#define BOOST_PP_NODE_159(p) BOOST_PP_IIF(p(159), 159, 160)
#define BOOST_PP_NODE_176(p)                                                   \
  BOOST_PP_IIF(p(176), BOOST_PP_NODE_168, BOOST_PP_NODE_184)
#define BOOST_PP_NODE_168(p)                                                   \
  BOOST_PP_IIF(p(168), BOOST_PP_NODE_164, BOOST_PP_NODE_172)
#define BOOST_PP_NODE_164(p)                                                   \
  BOOST_PP_IIF(p(164), BOOST_PP_NODE_162, BOOST_PP_NODE_166)
#define BOOST_PP_NODE_162(p)                                                   \
  BOOST_PP_IIF(p(162), BOOST_PP_NODE_161, BOOST_PP_NODE_163)
#define BOOST_PP_NODE_161(p) BOOST_PP_IIF(p(161), 161, 162)
#define BOOST_PP_NODE_163(p) BOOST_PP_IIF(p(163), 163, 164)
#define BOOST_PP_NODE_166(p)                                                   \
  BOOST_PP_IIF(p(166), BOOST_PP_NODE_165, BOOST_PP_NODE_167)
#define BOOST_PP_NODE_165(p) BOOST_PP_IIF(p(165), 165, 166)
#define BOOST_PP_NODE_167(p) BOOST_PP_IIF(p(167), 167, 168)
#define BOOST_PP_NODE_172(p)                                                   \
  BOOST_PP_IIF(p(172), BOOST_PP_NODE_170, BOOST_PP_NODE_174)
#define BOOST_PP_NODE_170(p)                                                   \
  BOOST_PP_IIF(p(170), BOOST_PP_NODE_169, BOOST_PP_NODE_171)
#define BOOST_PP_NODE_169(p) BOOST_PP_IIF(p(169), 169, 170)
#define BOOST_PP_NODE_171(p) BOOST_PP_IIF(p(171), 171, 172)
#define BOOST_PP_NODE_174(p)                                                   \
  BOOST_PP_IIF(p(174), BOOST_PP_NODE_173, BOOST_PP_NODE_175)
#define BOOST_PP_NODE_173(p) BOOST_PP_IIF(p(173), 173, 174)
#define BOOST_PP_NODE_175(p) BOOST_PP_IIF(p(175), 175, 176)
#define BOOST_PP_NODE_184(p)                                                   \
  BOOST_PP_IIF(p(184), BOOST_PP_NODE_180, BOOST_PP_NODE_188)
#define BOOST_PP_NODE_180(p)                                                   \
  BOOST_PP_IIF(p(180), BOOST_PP_NODE_178, BOOST_PP_NODE_182)
#define BOOST_PP_NODE_178(p)                                                   \
  BOOST_PP_IIF(p(178), BOOST_PP_NODE_177, BOOST_PP_NODE_179)
#define BOOST_PP_NODE_177(p) BOOST_PP_IIF(p(177), 177, 178)
#define BOOST_PP_NODE_179(p) BOOST_PP_IIF(p(179), 179, 180)
#define BOOST_PP_NODE_182(p)                                                   \
  BOOST_PP_IIF(p(182), BOOST_PP_NODE_181, BOOST_PP_NODE_183)
#define BOOST_PP_NODE_181(p) BOOST_PP_IIF(p(181), 181, 182)
#define BOOST_PP_NODE_183(p) BOOST_PP_IIF(p(183), 183, 184)
#define BOOST_PP_NODE_188(p)                                                   \
  BOOST_PP_IIF(p(188), BOOST_PP_NODE_186, BOOST_PP_NODE_190)
#define BOOST_PP_NODE_186(p)                                                   \
  BOOST_PP_IIF(p(186), BOOST_PP_NODE_185, BOOST_PP_NODE_187)
#define BOOST_PP_NODE_185(p) BOOST_PP_IIF(p(185), 185, 186)
#define BOOST_PP_NODE_187(p) BOOST_PP_IIF(p(187), 187, 188)
#define BOOST_PP_NODE_190(p)                                                   \
  BOOST_PP_IIF(p(190), BOOST_PP_NODE_189, BOOST_PP_NODE_191)
#define BOOST_PP_NODE_189(p) BOOST_PP_IIF(p(189), 189, 190)
#define BOOST_PP_NODE_191(p) BOOST_PP_IIF(p(191), 191, 192)
#define BOOST_PP_NODE_224(p)                                                   \
  BOOST_PP_IIF(p(224), BOOST_PP_NODE_208, BOOST_PP_NODE_240)
#define BOOST_PP_NODE_208(p)                                                   \
  BOOST_PP_IIF(p(208), BOOST_PP_NODE_200, BOOST_PP_NODE_216)
#define BOOST_PP_NODE_200(p)                                                   \
  BOOST_PP_IIF(p(200), BOOST_PP_NODE_196, BOOST_PP_NODE_204)
#define BOOST_PP_NODE_196(p)                                                   \
  BOOST_PP_IIF(p(196), BOOST_PP_NODE_194, BOOST_PP_NODE_198)
#define BOOST_PP_NODE_194(p)                                                   \
  BOOST_PP_IIF(p(194), BOOST_PP_NODE_193, BOOST_PP_NODE_195)
#define BOOST_PP_NODE_193(p) BOOST_PP_IIF(p(193), 193, 194)
#define BOOST_PP_NODE_195(p) BOOST_PP_IIF(p(195), 195, 196)
#define BOOST_PP_NODE_198(p)                                                   \
  BOOST_PP_IIF(p(198), BOOST_PP_NODE_197, BOOST_PP_NODE_199)
#define BOOST_PP_NODE_197(p) BOOST_PP_IIF(p(197), 197, 198)
#define BOOST_PP_NODE_199(p) BOOST_PP_IIF(p(199), 199, 200)
#define BOOST_PP_NODE_204(p)                                                   \
  BOOST_PP_IIF(p(204), BOOST_PP_NODE_202, BOOST_PP_NODE_206)
#define BOOST_PP_NODE_202(p)                                                   \
  BOOST_PP_IIF(p(202), BOOST_PP_NODE_201, BOOST_PP_NODE_203)
#define BOOST_PP_NODE_201(p) BOOST_PP_IIF(p(201), 201, 202)
#define BOOST_PP_NODE_203(p) BOOST_PP_IIF(p(203), 203, 204)
#define BOOST_PP_NODE_206(p)                                                   \
  BOOST_PP_IIF(p(206), BOOST_PP_NODE_205, BOOST_PP_NODE_207)
#define BOOST_PP_NODE_205(p) BOOST_PP_IIF(p(205), 205, 206)
#define BOOST_PP_NODE_207(p) BOOST_PP_IIF(p(207), 207, 208)
#define BOOST_PP_NODE_216(p)                                                   \
  BOOST_PP_IIF(p(216), BOOST_PP_NODE_212, BOOST_PP_NODE_220)
#define BOOST_PP_NODE_212(p)                                                   \
  BOOST_PP_IIF(p(212), BOOST_PP_NODE_210, BOOST_PP_NODE_214)
#define BOOST_PP_NODE_210(p)                                                   \
  BOOST_PP_IIF(p(210), BOOST_PP_NODE_209, BOOST_PP_NODE_211)
#define BOOST_PP_NODE_209(p) BOOST_PP_IIF(p(209), 209, 210)
#define BOOST_PP_NODE_211(p) BOOST_PP_IIF(p(211), 211, 212)
#define BOOST_PP_NODE_214(p)                                                   \
  BOOST_PP_IIF(p(214), BOOST_PP_NODE_213, BOOST_PP_NODE_215)
#define BOOST_PP_NODE_213(p) BOOST_PP_IIF(p(213), 213, 214)
#define BOOST_PP_NODE_215(p) BOOST_PP_IIF(p(215), 215, 216)
#define BOOST_PP_NODE_220(p)                                                   \
  BOOST_PP_IIF(p(220), BOOST_PP_NODE_218, BOOST_PP_NODE_222)
#define BOOST_PP_NODE_218(p)                                                   \
  BOOST_PP_IIF(p(218), BOOST_PP_NODE_217, BOOST_PP_NODE_219)
#define BOOST_PP_NODE_217(p) BOOST_PP_IIF(p(217), 217, 218)
#define BOOST_PP_NODE_219(p) BOOST_PP_IIF(p(219), 219, 220)
#define BOOST_PP_NODE_222(p)                                                   \
  BOOST_PP_IIF(p(222), BOOST_PP_NODE_221, BOOST_PP_NODE_223)
#define BOOST_PP_NODE_221(p) BOOST_PP_IIF(p(221), 221, 222)
#define BOOST_PP_NODE_223(p) BOOST_PP_IIF(p(223), 223, 224)
#define BOOST_PP_NODE_240(p)                                                   \
  BOOST_PP_IIF(p(240), BOOST_PP_NODE_232, BOOST_PP_NODE_248)
#define BOOST_PP_NODE_232(p)                                                   \
  BOOST_PP_IIF(p(232), BOOST_PP_NODE_228, BOOST_PP_NODE_236)
#define BOOST_PP_NODE_228(p)                                                   \
  BOOST_PP_IIF(p(228), BOOST_PP_NODE_226, BOOST_PP_NODE_230)
#define BOOST_PP_NODE_226(p)                                                   \
  BOOST_PP_IIF(p(226), BOOST_PP_NODE_225, BOOST_PP_NODE_227)
#define BOOST_PP_NODE_225(p) BOOST_PP_IIF(p(225), 225, 226)
#define BOOST_PP_NODE_227(p) BOOST_PP_IIF(p(227), 227, 228)
#define BOOST_PP_NODE_230(p)                                                   \
  BOOST_PP_IIF(p(230), BOOST_PP_NODE_229, BOOST_PP_NODE_231)
#define BOOST_PP_NODE_229(p) BOOST_PP_IIF(p(229), 229, 230)
#define BOOST_PP_NODE_231(p) BOOST_PP_IIF(p(231), 231, 232)
#define BOOST_PP_NODE_236(p)                                                   \
  BOOST_PP_IIF(p(236), BOOST_PP_NODE_234, BOOST_PP_NODE_238)
#define BOOST_PP_NODE_234(p)                                                   \
  BOOST_PP_IIF(p(234), BOOST_PP_NODE_233, BOOST_PP_NODE_235)
#define BOOST_PP_NODE_233(p) BOOST_PP_IIF(p(233), 233, 234)
#define BOOST_PP_NODE_235(p) BOOST_PP_IIF(p(235), 235, 236)
#define BOOST_PP_NODE_238(p)                                                   \
  BOOST_PP_IIF(p(238), BOOST_PP_NODE_237, BOOST_PP_NODE_239)
#define BOOST_PP_NODE_237(p) BOOST_PP_IIF(p(237), 237, 238)
#define BOOST_PP_NODE_239(p) BOOST_PP_IIF(p(239), 239, 240)
#define BOOST_PP_NODE_248(p)                                                   \
  BOOST_PP_IIF(p(248), BOOST_PP_NODE_244, BOOST_PP_NODE_252)
#define BOOST_PP_NODE_244(p)                                                   \
  BOOST_PP_IIF(p(244), BOOST_PP_NODE_242, BOOST_PP_NODE_246)
#define BOOST_PP_NODE_242(p)                                                   \
  BOOST_PP_IIF(p(242), BOOST_PP_NODE_241, BOOST_PP_NODE_243)
#define BOOST_PP_NODE_241(p) BOOST_PP_IIF(p(241), 241, 242)
#define BOOST_PP_NODE_243(p) BOOST_PP_IIF(p(243), 243, 244)
#define BOOST_PP_NODE_246(p)                                                   \
  BOOST_PP_IIF(p(246), BOOST_PP_NODE_245, BOOST_PP_NODE_247)
#define BOOST_PP_NODE_245(p) BOOST_PP_IIF(p(245), 245, 246)
#define BOOST_PP_NODE_247(p) BOOST_PP_IIF(p(247), 247, 248)
#define BOOST_PP_NODE_252(p)                                                   \
  BOOST_PP_IIF(p(252), BOOST_PP_NODE_250, BOOST_PP_NODE_254)
#define BOOST_PP_NODE_250(p)                                                   \
  BOOST_PP_IIF(p(250), BOOST_PP_NODE_249, BOOST_PP_NODE_251)
#define BOOST_PP_NODE_249(p) BOOST_PP_IIF(p(249), 249, 250)
#define BOOST_PP_NODE_251(p) BOOST_PP_IIF(p(251), 251, 252)
#define BOOST_PP_NODE_254(p)                                                   \
  BOOST_PP_IIF(p(254), BOOST_PP_NODE_253, BOOST_PP_NODE_255)
#define BOOST_PP_NODE_253(p) BOOST_PP_IIF(p(253), 253, 254)
#define BOOST_PP_NODE_255(p) BOOST_PP_IIF(p(255), 255, 256)
#
#endif
#
#endif
#
#else
#
#if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#include <boost/preprocessor/detail/dmc/auto_rec.hpp>
#else
#
#ifndef BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#define BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#
#/* BOOST_PP_AUTO_REC */
#
#include <boost/preprocessor/control/iif.hpp>
#
#define BOOST_PP_AUTO_REC(pred, n) BOOST_PP_NODE_ENTRY_##n(pred)
#
#include <boost/preprocessor/config/limits.hpp>
#
#if BOOST_PP_LIMIT_MAG == 256
#include <boost/preprocessor/detail/limits/auto_rec_256.hpp>
#elif BOOST_PP_LIMIT_MAG == 512
#include <boost/preprocessor/detail/limits/auto_rec_256.hpp>
#include <boost/preprocessor/detail/limits/auto_rec_512.hpp>
#elif BOOST_PP_LIMIT_MAG == 1024
#include <boost/preprocessor/detail/limits/auto_rec_1024.hpp>
#include <boost/preprocessor/detail/limits/auto_rec_256.hpp>
#include <boost/preprocessor/detail/limits/auto_rec_512.hpp>

#else
#error Incorrect value for the BOOST_PP_LIMIT_MAG limit
#endif
#
#endif
#
#endif
#
#endif
