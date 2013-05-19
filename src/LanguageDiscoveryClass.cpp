/* Generated by re2c 0.13.5 */
/**
 * The MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <pelet/LanguageDiscoveryClass.h>
#include <pelet/TokenClass.h>

#define DISCOVERY_BUFFER_FILL(n) { Buffer.AppendToLexeme(n); }

#define DISCOVERY_GET_CONDITION() syntax

#define DISCOVERY_SET_CONDITION(c) syntax = c

pelet::LanguageDiscoveryClass::LanguageDiscoveryClass()
	: Buffer()
	, Code() {
}

void pelet::LanguageDiscoveryClass::Close() {
	Buffer.Close();
}

bool pelet::LanguageDiscoveryClass::Open(const wxString& code) {
	bool ret = Buffer.OpenString(code);
	if (ret) {
		Code = code;
	}
	return ret;
}

pelet::LanguageDiscoveryClass::Syntax pelet::LanguageDiscoveryClass::at(int pos) {

	// need to reset the buffer back to the beginning of the source code
	Buffer.OpenString(Code);
	int currentPos = 0;
	
	// this variable is used because PHP can be embedded within any part of HTML (tag, attribute or 
	// value) and when we break out of the PHP we need to know what HTML condition we were in
	// for example this line:  < a href="<?php link_to('home'); ?>"
	// in this case when PHP ends we need to go back to the HTML_ATTRIBUTE_VALUE condition 
	pelet::LanguageDiscoveryClass::Syntax lastCondition = pelet::LanguageDiscoveryClass::SYNTAX_HTML;
	pelet::LanguageDiscoveryClass::Syntax syntax = pelet::LanguageDiscoveryClass::SYNTAX_HTML;
	
	// Note: the rules below are NOT the full PHP spec; they are only enough rules so that we can
	// properly tell what language we are in.  
	
discovery_start:
	int tokenLength = Buffer.Current - Buffer.TokenStart;
	currentPos += tokenLength;
	if (currentPos >= pos) {
		return syntax;
	}
	
	Buffer.MarkTokenStart();
	
discovery_next_char:

	{
		wxChar yych;
		unsigned int yyaccept = 0;
		switch (DISCOVERY_GET_CONDITION()) {
		case SYNTAX_HTML: goto discovery_HTML;
		case SYNTAX_HTML_ATTRIBUTE: goto discovery_HTML_ATTRIBUTE;
		case SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE: goto discovery_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE;
		case SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE: goto discovery_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE;
		case SYNTAX_HTML_COMMENT: goto discovery_HTML_COMMENT;
		case SYNTAX_HTML_ENTITY: goto discovery_HTML_ENTITY;
		case SYNTAX_HTML_TAG: goto discovery_HTML_TAG;
		case SYNTAX_PHP_BACKTICK: goto discovery_PHP_BACKTICK;
		case SYNTAX_PHP_DOUBLE_QUOTE_STRING: goto discovery_PHP_DOUBLE_QUOTE_STRING;
		case SYNTAX_PHP_HEREDOC: goto discovery_PHP_HEREDOC;
		case SYNTAX_PHP_LINE_COMMENT: goto discovery_PHP_LINE_COMMENT;
		case SYNTAX_PHP_MULTI_LINE_COMMENT: goto discovery_PHP_MULTI_LINE_COMMENT;
		case SYNTAX_PHP_NOWDOC: goto discovery_PHP_NOWDOC;
		case SYNTAX_PHP_SCRIPT: goto discovery_PHP_SCRIPT;
		case SYNTAX_PHP_SINGLE_QUOTE_STRING: goto discovery_PHP_SINGLE_QUOTE_STRING;
		}
/* *********************************** */
discovery_HTML:

		if ((Buffer.Limit - Buffer.Current) < 7) DISCOVERY_BUFFER_FILL(7);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_2;
		case '\n':	goto discovery_6;
		case '\r':	goto discovery_8;
		case '&':	goto discovery_9;
		case '<':	goto discovery_4;
		default:	goto discovery_11;
		}
discovery_2:
		++Buffer.Current;
		{ return syntax; }
discovery_4:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '!':	goto discovery_14;
		case '?':	goto discovery_16;
		default:	goto discovery_5;
		}
discovery_5:
		{ syntax = SYNTAX_HTML_TAG; goto discovery_start; }
discovery_6:
		++Buffer.Current;
discovery_7:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_8:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_13;
		default:	goto discovery_7;
		}
discovery_9:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ENTITY; goto discovery_start; }
discovery_11:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_13:
		yych = *++Buffer.Current;
		goto discovery_7;
discovery_14:
		yych = *++Buffer.Current;
		switch (yych) {
		case '-':	goto discovery_26;
		default:	goto discovery_15;
		}
discovery_15:
		Buffer.Current = Buffer.Marker;
		switch (yyaccept) {
		case 0: 	goto discovery_5;
		case 1: 	goto discovery_17;
		}
discovery_16:
		yyaccept = 1;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '=':	goto discovery_19;
		case 'P':
		case 'p':	goto discovery_18;
		default:	goto discovery_17;
		}
discovery_17:
		{ lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_18:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'H':
		case 'h':	goto discovery_21;
		default:	goto discovery_15;
		}
discovery_19:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_21:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'P':
		case 'p':	goto discovery_22;
		default:	goto discovery_15;
		}
discovery_22:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_23;
		case '\r':	goto discovery_25;
		default:	goto discovery_15;
		}
discovery_23:
		++Buffer.Current;
discovery_24:
		{ lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_25:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_23;
		default:	goto discovery_24;
		}
discovery_26:
		yych = *++Buffer.Current;
		switch (yych) {
		case '-':	goto discovery_27;
		default:	goto discovery_15;
		}
discovery_27:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML; syntax = SYNTAX_HTML_COMMENT; goto discovery_start; }
/* *********************************** */
discovery_HTML_ATTRIBUTE:
		if ((Buffer.Limit - Buffer.Current) < 7) DISCOVERY_BUFFER_FILL(7);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_31;
		case '/':	goto discovery_36;
		case '<':	goto discovery_33;
		case '=':	goto discovery_35;
		case '>':	goto discovery_37;
		default:	goto discovery_39;
		}
discovery_31:
		++Buffer.Current;
		{ return syntax; }
discovery_33:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '?':	goto discovery_51;
		default:	goto discovery_34;
		}
discovery_34:
		{ goto discovery_start; }
discovery_35:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case '\r':
		case ' ':
		case '"':
		case '\'':	goto discovery_43;
		default:	goto discovery_34;
		}
discovery_36:
		yych = *++Buffer.Current;
		switch (yych) {
		case '>':	goto discovery_40;
		default:	goto discovery_34;
		}
discovery_37:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_39:
		yych = *++Buffer.Current;
		goto discovery_34;
discovery_40:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_42:
		++Buffer.Current;
		if (Buffer.Limit <= Buffer.Current) DISCOVERY_BUFFER_FILL(1);
		yych = *Buffer.Current;
discovery_43:
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_42;
		case '\r':	goto discovery_45;
		case '"':	goto discovery_49;
		case '\'':	goto discovery_47;
		default:	goto discovery_44;
		}
discovery_44:
		Buffer.Current = Buffer.Marker;
		switch (yyaccept) {
		case 0: 	goto discovery_34;
		case 1: 	goto discovery_52;
		}
discovery_45:
		++Buffer.Current;
		if (Buffer.Limit <= Buffer.Current) DISCOVERY_BUFFER_FILL(1);
		yych = *Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_42;
		case '\r':	goto discovery_45;
		case '"':	goto discovery_49;
		case '\'':	goto discovery_47;
		default:	goto discovery_44;
		}
discovery_47:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; goto discovery_start; }
discovery_49:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; goto discovery_start; }
discovery_51:
		yyaccept = 1;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '=':	goto discovery_54;
		case 'P':
		case 'p':	goto discovery_53;
		default:	goto discovery_52;
		}
discovery_52:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_53:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'H':
		case 'h':	goto discovery_56;
		default:	goto discovery_44;
		}
discovery_54:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_56:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'P':
		case 'p':	goto discovery_57;
		default:	goto discovery_44;
		}
discovery_57:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_58;
		case '\r':	goto discovery_60;
		default:	goto discovery_44;
		}
discovery_58:
		++Buffer.Current;
discovery_59:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_60:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '\n':	goto discovery_58;
		default:	goto discovery_59;
		}
/* *********************************** */
discovery_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE:
		if ((Buffer.Limit - Buffer.Current) < 7) DISCOVERY_BUFFER_FILL(7);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_63;
		case '"':	goto discovery_68;
		case '<':	goto discovery_65;
		case '\\':	goto discovery_67;
		default:	goto discovery_70;
		}
discovery_63:
		++Buffer.Current;
		{ return syntax; }
discovery_65:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '?':	goto discovery_73;
		default:	goto discovery_66;
		}
discovery_66:
		{ goto discovery_start; }
discovery_67:
		yych = *++Buffer.Current;
		switch (yych) {
		case '"':	goto discovery_71;
		default:	goto discovery_66;
		}
discovery_68:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
discovery_70:
		yych = *++Buffer.Current;
		goto discovery_66;
discovery_71:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_73:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '=':	goto discovery_77;
		case 'P':
		case 'p':	goto discovery_75;
		default:	goto discovery_74;
		}
discovery_74:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_75:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'H':
		case 'h':	goto discovery_79;
		default:	goto discovery_76;
		}
discovery_76:
		Buffer.Current = Buffer.Marker;
		goto discovery_74;
discovery_77:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_79:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'P':
		case 'p':	goto discovery_80;
		default:	goto discovery_76;
		}
discovery_80:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_81;
		case '\r':	goto discovery_83;
		default:	goto discovery_76;
		}
discovery_81:
		++Buffer.Current;
discovery_82:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_83:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '\n':	goto discovery_81;
		default:	goto discovery_82;
		}
/* *********************************** */
discovery_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE:
		if ((Buffer.Limit - Buffer.Current) < 7) DISCOVERY_BUFFER_FILL(7);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_86;
		case '\'':	goto discovery_91;
		case '<':	goto discovery_88;
		case '\\':	goto discovery_90;
		default:	goto discovery_93;
		}
discovery_86:
		++Buffer.Current;
		{ return syntax; }
discovery_88:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '?':	goto discovery_96;
		default:	goto discovery_89;
		}
discovery_89:
		{ goto discovery_start; }
discovery_90:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\'':	goto discovery_94;
		default:	goto discovery_89;
		}
discovery_91:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
discovery_93:
		yych = *++Buffer.Current;
		goto discovery_89;
discovery_94:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_96:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '=':	goto discovery_100;
		case 'P':
		case 'p':	goto discovery_98;
		default:	goto discovery_97;
		}
discovery_97:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_98:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'H':
		case 'h':	goto discovery_102;
		default:	goto discovery_99;
		}
discovery_99:
		Buffer.Current = Buffer.Marker;
		goto discovery_97;
discovery_100:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_102:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'P':
		case 'p':	goto discovery_103;
		default:	goto discovery_99;
		}
discovery_103:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_104;
		case '\r':	goto discovery_106;
		default:	goto discovery_99;
		}
discovery_104:
		++Buffer.Current;
discovery_105:
		{ lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_106:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '\n':	goto discovery_104;
		default:	goto discovery_105;
		}
/* *********************************** */
discovery_HTML_COMMENT:
		if ((Buffer.Limit - Buffer.Current) < 3) DISCOVERY_BUFFER_FILL(3);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_109;
		case '\n':	goto discovery_111;
		case '\r':	goto discovery_113;
		case '-':	goto discovery_114;
		default:	goto discovery_116;
		}
discovery_109:
		++Buffer.Current;
		{ return syntax; }
discovery_111:
		++Buffer.Current;
discovery_112:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_113:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_121;
		default:	goto discovery_112;
		}
discovery_114:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '-':	goto discovery_117;
		default:	goto discovery_115;
		}
discovery_115:
		{ goto discovery_start; }
discovery_116:
		yych = *++Buffer.Current;
		goto discovery_115;
discovery_117:
		yych = *++Buffer.Current;
		switch (yych) {
		case '>':	goto discovery_119;
		default:	goto discovery_118;
		}
discovery_118:
		Buffer.Current = Buffer.Marker;
		goto discovery_115;
discovery_119:
		++Buffer.Current;
		{  syntax = SYNTAX_HTML; goto discovery_start; }
discovery_121:
		++Buffer.Current;
		yych = *Buffer.Current;
		goto discovery_112;
/* *********************************** */
discovery_HTML_ENTITY:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_124;
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_126;
		case '\r':	goto discovery_128;
		default:	goto discovery_129;
		}
discovery_124:
		++Buffer.Current;
		{ return syntax; }
discovery_126:
		++Buffer.Current;
discovery_127:
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_128:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_131;
		default:	goto discovery_127;
		}
discovery_129:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_131:
		++Buffer.Current;
		yych = *Buffer.Current;
		goto discovery_127;
/* *********************************** */
discovery_HTML_TAG:
		if ((Buffer.Limit - Buffer.Current) < 7) DISCOVERY_BUFFER_FILL(7);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_134;
		case '\t':
		case '\v':
		case '\f':
		case ' ':	goto discovery_138;
		case '\n':	goto discovery_140;
		case '\r':	goto discovery_142;
		case '/':	goto discovery_143;
		case '<':	goto discovery_136;
		case '>':	goto discovery_144;
		default:	goto discovery_146;
		}
discovery_134:
		++Buffer.Current;
		{ return syntax; }
discovery_136:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '?':	goto discovery_150;
		default:	goto discovery_137;
		}
discovery_137:
		{ goto discovery_start; }
discovery_138:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
discovery_140:
		++Buffer.Current;
discovery_141:
		{ Buffer.IncrementLine(); syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
discovery_142:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_149;
		default:	goto discovery_141;
		}
discovery_143:
		yych = *++Buffer.Current;
		switch (yych) {
		case '>':	goto discovery_147;
		default:	goto discovery_137;
		}
discovery_144:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_146:
		yych = *++Buffer.Current;
		goto discovery_137;
discovery_147:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_149:
		yych = *++Buffer.Current;
		goto discovery_141;
discovery_150:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '=':	goto discovery_154;
		case 'P':
		case 'p':	goto discovery_152;
		default:	goto discovery_151;
		}
discovery_151:
		{ lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_152:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'H':
		case 'h':	goto discovery_156;
		default:	goto discovery_153;
		}
discovery_153:
		Buffer.Current = Buffer.Marker;
		goto discovery_151;
discovery_154:
		++Buffer.Current;
		{ lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_156:
		yych = *++Buffer.Current;
		switch (yych) {
		case 'P':
		case 'p':	goto discovery_157;
		default:	goto discovery_153;
		}
discovery_157:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case ' ':	goto discovery_158;
		case '\r':	goto discovery_160;
		default:	goto discovery_153;
		}
discovery_158:
		++Buffer.Current;
discovery_159:
		{ lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_160:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '\n':	goto discovery_158;
		default:	goto discovery_159;
		}
/* *********************************** */
discovery_PHP_BACKTICK:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_163;
		case '\n':	goto discovery_167;
		case '\r':	goto discovery_169;
		case '`':	goto discovery_165;
		default:	goto discovery_170;
		}
discovery_163:
		++Buffer.Current;
		{ return syntax; }
discovery_165:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_167:
		++Buffer.Current;
discovery_168:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_169:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_172;
		default:	goto discovery_168;
		}
discovery_170:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_172:
		++Buffer.Current;
		yych = *Buffer.Current;
		goto discovery_168;
/* *********************************** */
discovery_PHP_DOUBLE_QUOTE_STRING:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_175;
		case '\n':	goto discovery_181;
		case '\r':	goto discovery_183;
		case '"':	goto discovery_179;
		case '\\':	goto discovery_177;
		default:	goto discovery_184;
		}
discovery_175:
		++Buffer.Current;
		{ return syntax; }
discovery_177:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '"':	goto discovery_188;
		case '\\':	goto discovery_186;
		default:	goto discovery_178;
		}
discovery_178:
		{ goto discovery_start; }
discovery_179:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_SCRIPT; }
discovery_181:
		++Buffer.Current;
discovery_182:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_183:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_185;
		default:	goto discovery_182;
		}
discovery_184:
		yych = *++Buffer.Current;
		goto discovery_178;
discovery_185:
		yych = *++Buffer.Current;
		goto discovery_182;
discovery_186:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_188:
		++Buffer.Current;
		{ goto discovery_start; }
/* *********************************** */
discovery_PHP_HEREDOC:
		if (Buffer.Limit <= Buffer.Current) DISCOVERY_BUFFER_FILL(1);
		yych = *Buffer.Current;
		if (yych >= 0x01) goto discovery_194;
		++Buffer.Current;
		{ return syntax; }
discovery_194:
		++Buffer.Current;
		{ if (pelet::HandleHeredoc(&Buffer) == T_ERROR_UNTERMINATED_STRING || (currentPos + (Buffer.Current - Buffer.TokenStart)) >= pos)  { return syntax ; } syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
/* *********************************** */
discovery_PHP_LINE_COMMENT:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_198;
		case '\n':	goto discovery_200;
		case '\r':	goto discovery_202;
		case '?':	goto discovery_203;
		default:	goto discovery_205;
		}
discovery_198:
		++Buffer.Current;
		{ return syntax; }
discovery_200:
		++Buffer.Current;
discovery_201:
		{ Buffer.IncrementLine(); syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_202:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_208;
		default:	goto discovery_201;
		}
discovery_203:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '>':	goto discovery_206;
		default:	goto discovery_204;
		}
discovery_204:
		{ goto discovery_start; }
discovery_205:
		yych = *++Buffer.Current;
		goto discovery_204;
discovery_206:
		++Buffer.Current;
		{ syntax = SYNTAX_HTML; goto discovery_start; }
discovery_208:
		++Buffer.Current;
		yych = *Buffer.Current;
		goto discovery_201;
/* *********************************** */
discovery_PHP_MULTI_LINE_COMMENT:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_211;
		case '\n':	goto discovery_213;
		case '\r':	goto discovery_215;
		case '*':	goto discovery_216;
		default:	goto discovery_218;
		}
discovery_211:
		++Buffer.Current;
		{ return syntax; }
discovery_213:
		++Buffer.Current;
discovery_214:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_215:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_221;
		default:	goto discovery_214;
		}
discovery_216:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '/':	goto discovery_219;
		default:	goto discovery_217;
		}
discovery_217:
		{ goto discovery_start; }
discovery_218:
		yych = *++Buffer.Current;
		goto discovery_217;
discovery_219:
		++Buffer.Current;
		{  syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_221:
		++Buffer.Current;
		yych = *Buffer.Current;
		goto discovery_214;
/* *********************************** */
discovery_PHP_NOWDOC:
		if (Buffer.Limit <= Buffer.Current) DISCOVERY_BUFFER_FILL(1);
		yych = *Buffer.Current;
		if (yych >= 0x01) goto discovery_226;
		++Buffer.Current;
		{ return syntax; }
discovery_226:
		++Buffer.Current;
		{ if (pelet::HandleNowdoc(&Buffer) == T_ERROR_UNTERMINATED_STRING || (currentPos + (Buffer.Current - Buffer.TokenStart)) >= pos) { return syntax; } syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
/* *********************************** */
discovery_PHP_SCRIPT:
		if ((Buffer.Limit - Buffer.Current) < 3) DISCOVERY_BUFFER_FILL(3);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_230;
		case '"':	goto discovery_239;
		case '#':	goto discovery_235;
		case '\'':	goto discovery_237;
		case '/':	goto discovery_234;
		case '<':	goto discovery_243;
		case '?':	goto discovery_232;
		case '`':	goto discovery_241;
		default:	goto discovery_244;
		}
discovery_230:
		++Buffer.Current;
		{ return syntax; }
discovery_232:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '>':	goto discovery_269;
		default:	goto discovery_233;
		}
discovery_233:
		{ goto discovery_start; }
discovery_234:
		yych = *++Buffer.Current;
		switch (yych) {
		case '*':	goto discovery_265;
		case '/':	goto discovery_267;
		default:	goto discovery_233;
		}
discovery_235:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_LINE_COMMENT; goto discovery_start;}
discovery_237:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_SINGLE_QUOTE_STRING; goto discovery_start;}
discovery_239:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_DOUBLE_QUOTE_STRING; goto discovery_start;}
discovery_241:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_BACKTICK; goto discovery_start;}
discovery_243:
		yyaccept = 0;
		yych = *(Buffer.Marker = ++Buffer.Current);
		switch (yych) {
		case '<':	goto discovery_245;
		default:	goto discovery_233;
		}
discovery_244:
		yych = *++Buffer.Current;
		goto discovery_233;
discovery_245:
		yych = *++Buffer.Current;
		switch (yych) {
		case '<':	goto discovery_247;
		default:	goto discovery_246;
		}
discovery_246:
		Buffer.Current = Buffer.Marker;
		goto discovery_233;
discovery_247:
		++Buffer.Current;
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07:
		case 0x08:
		case '\n':
		case '\r':
		case 0x0E:
		case 0x0F:
		case 0x10:
		case 0x11:
		case 0x12:
		case 0x13:
		case 0x14:
		case 0x15:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1A:
		case 0x1B:
		case 0x1C:
		case 0x1D:
		case 0x1E:
		case 0x1F:
		case '!':
		case '#':
		case '$':
		case '%':
		case '&':
		case '(':
		case ')':
		case '*':
		case '+':
		case ',':
		case '-':
		case '.':
		case '/':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case ':':
		case ';':
		case '<':
		case '=':
		case '>':
		case '?':
		case '@':
		case '[':
		case '\\':
		case ']':
		case '^':
		case '`':
		case '{':
		case '|':
		case '}':
		case '~':	goto discovery_246;
		case '\t':
		case '\v':
		case '\f':
		case ' ':	goto discovery_247;
		case '"':	goto discovery_250;
		case '\'':	goto discovery_249;
		default:	goto discovery_251;
		}
discovery_249:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\'':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto discovery_246;
		default:	goto discovery_260;
		}
discovery_250:
		yych = *++Buffer.Current;
		switch (yych) {
		case '"':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto discovery_246;
		default:	goto discovery_257;
		}
discovery_251:
		++Buffer.Current;
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07:
		case 0x08:
		case '\t':
		case '\v':
		case '\f':
		case 0x0E:
		case 0x0F:
		case 0x10:
		case 0x11:
		case 0x12:
		case 0x13:
		case 0x14:
		case 0x15:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1A:
		case 0x1B:
		case 0x1C:
		case 0x1D:
		case 0x1E:
		case 0x1F:
		case ' ':
		case '!':
		case '"':
		case '#':
		case '$':
		case '%':
		case '&':
		case '\'':
		case '(':
		case ')':
		case '*':
		case '+':
		case ',':
		case '-':
		case '.':
		case '/':
		case ':':
		case ';':
		case '<':
		case '=':
		case '>':
		case '?':
		case '@':
		case '[':
		case '\\':
		case ']':
		case '^':
		case '`':
		case '{':
		case '|':
		case '}':
		case '~':	goto discovery_246;
		case '\n':	goto discovery_253;
		case '\r':	goto discovery_255;
		default:	goto discovery_251;
		}
discovery_253:
		++Buffer.Current;
discovery_254:
		{ Buffer.IncrementLine(); syntax = SYNTAX_PHP_HEREDOC; goto discovery_next_char; }
discovery_255:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_253;
		default:	goto discovery_254;
		}
discovery_256:
		++Buffer.Current;
		if ((Buffer.Limit - Buffer.Current) < 3) DISCOVERY_BUFFER_FILL(3);
		yych = *Buffer.Current;
discovery_257:
		switch (yych) {
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07:
		case 0x08:
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case '\r':
		case 0x0E:
		case 0x0F:
		case 0x10:
		case 0x11:
		case 0x12:
		case 0x13:
		case 0x14:
		case 0x15:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1A:
		case 0x1B:
		case 0x1C:
		case 0x1D:
		case 0x1E:
		case 0x1F:
		case ' ':
		case '!':
		case '#':
		case '$':
		case '%':
		case '&':
		case '\'':
		case '(':
		case ')':
		case '*':
		case '+':
		case ',':
		case '-':
		case '.':
		case '/':
		case ':':
		case ';':
		case '<':
		case '=':
		case '>':
		case '?':
		case '@':
		case '[':
		case '\\':
		case ']':
		case '^':
		case '`':
		case '{':
		case '|':
		case '}':
		case '~':	goto discovery_246;
		case '"':	goto discovery_258;
		default:	goto discovery_256;
		}
discovery_258:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_253;
		case '\r':	goto discovery_255;
		default:	goto discovery_246;
		}
discovery_259:
		++Buffer.Current;
		if ((Buffer.Limit - Buffer.Current) < 3) DISCOVERY_BUFFER_FILL(3);
		yych = *Buffer.Current;
discovery_260:
		switch (yych) {
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07:
		case 0x08:
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case '\r':
		case 0x0E:
		case 0x0F:
		case 0x10:
		case 0x11:
		case 0x12:
		case 0x13:
		case 0x14:
		case 0x15:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1A:
		case 0x1B:
		case 0x1C:
		case 0x1D:
		case 0x1E:
		case 0x1F:
		case ' ':
		case '!':
		case '"':
		case '#':
		case '$':
		case '%':
		case '&':
		case '(':
		case ')':
		case '*':
		case '+':
		case ',':
		case '-':
		case '.':
		case '/':
		case ':':
		case ';':
		case '<':
		case '=':
		case '>':
		case '?':
		case '@':
		case '[':
		case '\\':
		case ']':
		case '^':
		case '`':
		case '{':
		case '|':
		case '}':
		case '~':	goto discovery_246;
		case '\'':	goto discovery_261;
		default:	goto discovery_259;
		}
discovery_261:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_262;
		case '\r':	goto discovery_264;
		default:	goto discovery_246;
		}
discovery_262:
		++Buffer.Current;
discovery_263:
		{ Buffer.IncrementLine(); syntax = SYNTAX_PHP_NOWDOC; goto discovery_next_char; }
discovery_264:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_262;
		default:	goto discovery_263;
		}
discovery_265:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_MULTI_LINE_COMMENT; goto discovery_start;}
discovery_267:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_LINE_COMMENT; goto discovery_start;}
discovery_269:
		++Buffer.Current;
		{ syntax = lastCondition; goto discovery_start; }
/* *********************************** */
discovery_PHP_SINGLE_QUOTE_STRING:
		if ((Buffer.Limit - Buffer.Current) < 2) DISCOVERY_BUFFER_FILL(2);
		yych = *Buffer.Current;
		switch (yych) {
		case 0x00:	goto discovery_273;
		case '\n':	goto discovery_279;
		case '\r':	goto discovery_281;
		case '\'':	goto discovery_277;
		case '\\':	goto discovery_275;
		default:	goto discovery_282;
		}
discovery_273:
		++Buffer.Current;
		{ return syntax; }
discovery_275:
		++Buffer.Current;
		switch ((yych = *Buffer.Current)) {
		case '\'':	goto discovery_286;
		case '\\':	goto discovery_284;
		default:	goto discovery_276;
		}
discovery_276:
		{ goto discovery_start; }
discovery_277:
		++Buffer.Current;
		{ syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
discovery_279:
		++Buffer.Current;
discovery_280:
		{ Buffer.IncrementLine(); goto discovery_start; }
discovery_281:
		yych = *++Buffer.Current;
		switch (yych) {
		case '\n':	goto discovery_283;
		default:	goto discovery_280;
		}
discovery_282:
		yych = *++Buffer.Current;
		goto discovery_276;
discovery_283:
		yych = *++Buffer.Current;
		goto discovery_280;
discovery_284:
		++Buffer.Current;
		{ goto discovery_start; }
discovery_286:
		++Buffer.Current;
		{ goto discovery_start; }
	}


}
