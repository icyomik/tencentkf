获取列表：POST
curl -b cookies.txt -d "iAppid=19089&sBillId=&sOpenId=&sTitle=&sSubmitSt=2012-08-01&sSubmitEt=2012-08-01&iScope=0&pg=1&ct=10" http://19089.kf.ieodopen.qq.com/php/question/qrybill


打开工单：POST
curl -b cookies.txt -d "iAppid=19089&sBillId=2012080115090206044942&iSessionId=201208011509020604&iMutex=1&sOpenid=000000000000000000000000166A2BB0" http://19089.kf.ieodopen.qq.com/php/question/get_admin_question_content


工单界面：GET
curl -b coolies.txt "http://19089.kf.ieodopen.qq.com/admin/reply.html?sBillId=2012080115090206044942&iSessionId=201208011509020604&sOpenId=000000000000000000000000166A2BB0"

用户工单：POST
curl -b cookies.txt -d "iAppid=19089&sOpenid=0000000000000000000000000497CC62&sBillId=2012080115192508965565&iSessionId=201208011519250896" http://19089.kf.ieodopen.qq.com/php/question/get_admin_question_content
curl -b cookies.txt -d "iAppid=19089&sOpenid=0000000000000000000000000497CC62&sBillId=2012080115192508965565&pg=1&ct=5" http://19089.kf.ieodopen.qq.com/php/question/get_user_question_list

回复工单：POST
curl -b cookies.txt -d "iAppid=19089&sOpenid=0000000000000000000000000497CC62&sBillId=2012080115192508965565&sReply=[这里是回复内容]" http://19089.kf.ieodopen.qq.com/php/question/reply_bill

【工单界面相关】[忽略]

重新获取工单：POST
curl -b cookies.txt -d "iAppid=19089&sBillId=&sOpenId=&sTitle=&sSubmitSt=2012-08-01&sSubmitEt=2012-08-01&sType=【问题种类】&iScope=0&pg=1&ct=10" http://19089.kf.ieodopen.qq.com/php/question/qrybill
curl -b cookies.txt -d "iAppid=19089" http://19089.kf.ieodopen.qq.com/php/questiontype/get



00:00:23.309	0.040	1253	132	GET	200	application/x-javascript								http://ptlogin2.qq.com/login?u=2541296968&p=65ACAE6A3CBAB5B1DCFABA2F630FC952&verifycode=FFFF&aid=518005201&u1=http%3A%2F%2Fkf.ieodopen.qq.com%2Fadmin%2Flogin.html&h=1&ptredirect=2&ptlang=2052&from_ui=1&dumy=&fp=loginerroralert&action=4-15-25046&mibao_css=&t=1&g=1
ptuiCB('4','0','','0','您输入的验证码不正确，请重新输入。', '2541296968');
00:00:48.453	0.040	1253	132	GET	200	application/x-javascript								http://ptlogin2.qq.com/login?u=2541296968&p=132F89F9E72B598A85208910138384E6&verifycode=ikbb&aid=518005201&u1=http%3A%2F%2Fkf.ieodopen.qq.com%2Fadmin%2Flogin.html&h=1&ptredirect=2&ptlang=2052&from_ui=1&dumy=&fp=loginerroralert&action=7-19-50195&mibao_css=&t=2&g=1
ptuiCB('3','0','','0','您输入的帐号或密码不正确，请重新输入。', '2541296968');
00:01:05.812	0.055	1253	188	GET	(Aborted)	application/x-javascript (NS_BINDING_ABORTED)	http://ptlogin2.qq.com/login?u=2541296968&p=AF8B48FCDD6FFB0F9E4BA71A48F4DFA4&verifycode=kpoh&aid=518005201&u1=http%3A%2F%2Fkf.ieodopen.qq.com%2Fadmin%2Flogin.html&h=1&ptredirect=2&ptlang=2052&from_ui=1&dumy=&fp=loginerroralert&action=9-34-67554&mibao_css=&t=3&g=1
ptuiCB('0','0','http://kf.ieodopen.qq.com/admin/login.html','2','登录成功！', '时尚都市GM001');
00:00:23.612	0.061	1360	188	GET	(Aborted)	application/x-javascript (NS_BINDING_ABORTED)	http://ptlogin2.qq.com/login?u=370300343&p=6D6FF241419BBFD20ADA850891D5D04D&verifycode=!0W8&aid=518005201&u1=http%3A%2F%2Fkf.ieodopen.qq.com%2Fadmin%2Flogin.html&h=1&ptredirect=2&ptlang=2052&from_ui=1&dumy=&fp=loginerroralert&action=3-30-18724&mibao_css=&t=1&g=1
ptuiCB('0','0','http://kf.ieodopen.qq.com/admin/login.html','2','登录成功！', '椛葬');



http://19089.kf.ieodopen.qq.com/php/login/get
有权限
{"resultcode":0,"resultinfo":{"errmsg":"","list":[],"obj":{"sUin":"QQ号","sNickName":"QQ昵称","isLogin":true,"sLogo":"http:\/\/qzonestyle.gtimg.cn\/qzonestyle\/act\/qzone_app_img\/app__64.png","sOfferName":null,"isOfferExist":"1","noPermiss":"0"}}}
无权限
{"resultcode":0,"resultinfo":{"errmsg":"","list":[],"obj":{"sUin":"QQ号","sNickName":"QQ昵称","isLogin":true,"sLogo":"http:\/\/qzonestyle.gtimg.cn\/qzonestyle\/act\/qzone_app_img\/app__64.png","sOfferName":null,"isOfferExist":"1","noPermiss":"0"}}}
未登录
{"resultcode":0,"resultinfo":{"errmsg":"\u4f60\u8fd8\u6ca1\u6709\u767b\u5f55\uff0c\u8bf7\u5148\u767b\u5f55","list":[],"obj":{"isLogin":0,"sUin":"0","sNickName":"","sLogo":"","sOfferName":"\u672a\u77e5\u5e94\u7528","isOfferExist":"1"}}}
