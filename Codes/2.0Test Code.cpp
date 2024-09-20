#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define turn system("cls")
using namespace std;
const int S=50;
int coin=1000;
char weapons[1005][1005];
int cnt;
void end(){
	system("color 0c");
	Sleep(3000);
	turn;
	cout<<"---------------------";
	cout<<"\n      游戏失败\n";
	cout<<"   作者：Sanm_so\n";
	cout<<"  续作者：Dreamin";
}
void slowsay(string str,int speed){
	int lenstr=str.size();
	for(int i=0;i<lenstr;i++){
		cout<<str[i];
		Sleep(speed);
	}
}
int main() {
	//by Sanmu.
	//合作请联系本人微信或快手.
	//版权所属：AWPC团队和Sanmu个人
	//复制可耻（（（
	cout<<"   欢迎来到悲惨的旅行之路（the tragic trip）\n";
	cout<<"         2.0测试版（中文模式）\n\n";
	cout<<"            健康游戏忠告\n";
	cout<<"     抵制不良游戏，拒绝盗版游戏。\n";
	cout<<"     注意自我保护，谨防受骗上当。\n";
	cout<<"     适度游戏益脑，沉迷游戏伤身。\n";
	cout<<"     合理安排时间，健康网络生活。\n\n";
	cout<<"【游玩注意事项】\n";
	cout<<"1.患有心脏病及老年人请勿游玩。\n";
	cout<<"2.若再游玩中感到不适，请停止游戏。\n";
	cout<<"3.本游戏为0氪金游戏，若有氪金提示，请勿相信并关闭提示。\n";
	cout<<"4.若有建议或评论，可在评论区或快手三沐小炑awa私信反馈给作者。\n\n";
	cout<<"0+enter继续\n";
	int a;
	cin>>a;
	turn;
	cout<<"                          游戏背景\n";
	slowsay("    你是旅行者John，正处于弗罗里达州，手里有1000RMB，你打算在今天\n",S);
	slowsay("夜晚至明天早晨自驾返回家中。在出发的前几天，当地的一则传闻说如果\n",S);
	slowsay("晚上看见有“人”在路边招手千万不要停车。你现在收拾好了行李，在与\n",S);
	slowsay("老妈聊天，准备启动车子回家。\n\n",S);
	cout<<"0+enter继续\n";
	cin>>a;
	turn;
	cout<<"老妈：John，你坐什么回家？大概啥时候到？\n";
	cout<<"你：1、我不回家了！  2、走路，多久我也不知道:)  3、开车呢，明天到\n";
	cin>>a;
	switch(a){
		case 1:cout<<"你：我不回家了！\n";cout<<"老妈：你个逆子！我**********！\n\n你被老妈远程击毙了";end();return 0;
		case 2:cout<<"你：走路，多久我也不知道:)\n";cout<<"老妈：你没事吧！孩子！你疯了，这得走多久啊！\n\n你最终累死了";end();return 0;
		case 3:cout<<"你：开车呢，明天到\n";cout<<"老妈：那好，车上保持联系，有商店记得带点鱼干儿回来\n";break;
	}
	cout<<"你：好的。";
	cout<<"\n\n\n";
	Sleep(3000);
	slowsay("缺德地图持续为您导航……\n\n",S);
	Sleep(500);
	cout<<"你：真的是服了，路上好大雾啊！\n";
	Sleep(1000);
	cout<<"老妈：小心点儿开，别出事了。\n";
	Sleep(5000);
	turn;
	cout<<"前面出现了一个巨大的木头挡住了道路，你急刹左转，冲进了油菜花田里。\n";
	Sleep(1000);
	cout<<"你：*****，这tm哪来一个木头。\n";
	cout<<"是否搬走木头：1是0否\n";
	cin>>a;
	if(a) cout<<"你下车用尽全力把木头搬走了。\n";
	else {cout<<"路被堵住了，所有车都过不了。\n";end();return 0;}
	Sleep(2000);
	cout<<"一辆货车朝你撞来，他急刹停了下来，你选择：1.马上逃走   2.招手让他接你\n";
	cin>>a;
	if(a==1) {cout<<"你被困在了野外……\n";end();return 0;}
	cout<<"货车司机人善，将你带上了车，并让你把东西都装在货箱里。\n";
	cout<<"司机：你好，我叫Shabby，你为什么站在路上？\n";
	cout<<"请选择对话：1.不知道啊  2.我把路上的木头搬走了  3.我被人丢在这里了\n";
	cin>>a;
	if(a==1){cout<<"你：不知道啊\nShabby：那你干嘛让我接你！（举起了大刀）（朝你砍了过来）\n你死了";end();return 0;}
	else if(a==2) cout<<"你：我把路上的木头搬走了\nShabby：噢，你真是个好心人，要不然我也完了\n";
	else if(a==3) cout<<"你：我被人丢在这里了\nShabby：噢，没事吧，真是个可怜的孩子\n";
	cout<<"\nShabby：最近有一则新闻，说是夜晚在路上会碰到拦车的Gui，你知道吗？\n";
	cout<<"1知道0不知道\n";
	cin>>a;
	if(a) cout<<"你：知道，挺恐怖的\n";
	else {cout<<"你：不知道，怎么了\nShabby：你是鬼！（举起了大刀）（朝你砍了过来）\n你死了";end();return 0;}
	cout<<"Shabby：我当初差点以为你是那个“人”了，下亖我了。\n";
	cout<<"你的回答：1. 6，哥们儿你也太迷信了吧  2.……我总感觉今天怪事挺多的\n";
	cin>>a;
	if(a==1) {cout<<"你：6，哥们儿你也太迷信了吧\nShabby：你不对劲\n（举起了大刀）（朝你砍了过来）\n你死了";end();return 0;}
	else cout<<"你：……我总感觉今天怪事挺多的\n司机：唉，那不然呢";
	cout<<"\nShabby：对了，我车没油了，我去加个油，你等会。\n";
	cout<<"你下车买了一个小鱼干，尝了一条，并发微信给老妈：小鱼干买到了 [图片]\n";
	coin-=27;
	cout<<"微信提示：还剩下"<<coin<<"RMB\n";
	cout<<"老妈：那就好\n";
	Sleep(1000);
	slowsay("司机继续回来开车……\n",S);
	Sleep(5000);
	turn;
	cout<<"Shabby：前面有一个宾馆，要不我送你到这吧\n";
	cout<<"你选择：1.下车去宾馆   2.赖着不走\n";
	cin>>a;
	if(a==1){
		cout<<"你去了宾馆。\n";
		cout<<"宾馆的前台邪魅一笑，眼睛闪着红光，化作一缕青烟朝你奔了过来\n\n";
		Sleep(2000);
		system("color 0c");
		cout<<"她张开血盆大口，将你的身体撕成了碎片。\n";
		end();return 0;
	}
	cout<<"你：这宾馆看着有点老啊，还是换一家吧。\n";
	cout<<"Shabby：……行吧\n\n\n";
	Sleep(3000);
	turn;
	cout<<"A FEW MOMERS LATER\n\n";
	cout<<"Shabby：到了，这是一家五星极的酒店，你赶紧下车吧。\n";
	cout<<"你选择：1.下车去酒店   2.赖着不走\n";
	cin>>a;
	if(a){
		cout<<"酒店前台：请问您要订哪种房呢？我们这边有几款适合你的：\n";
		cout<<"1.标准单床房888R 2.风景单床房1288R 3.风景大床房1488R 4.豪华庄园房1688R\n";
		int b;cin>>b;
		if(b==2||b==3||b==4){
			cout<<"酒店前台：对不起，您的余额不足……\n";
			Sleep(1000);
			cout<<"酒店前台：没实力就不要装啊，哥们\n（掏出来40米的大刀把你杀死了）\n";
			end();return 0;
		}
	}
	else{
		cout<<"你tm是不是故意找茬，还不走是吧？！\n（掏出手枪把你鸡毙了）\n";
		end();return 0;
	}
	cout<<"好的，请您填写入住记录，房号404，房卡给你了。\n";
	coin-=888;
	cout<<"微信支付888RMB，余额"<<coin<<"RMB\n";
	Sleep(2000);
	turn;
	cout<<"\n   第一片段结束，是否开启第二段(1:yes, 0:no)（难度：5星）：";
	cin>>a;
	if(!a) return 0;
	//大超级转场____________________
	//启动！！！！
	cout<<"          《404事件》\n\n\n";
	cout<<"       （音乐：MAIN TITLES）\n";
	cout<<"到了404，你选择：1.用房卡开门  2.敲门\n";
	cin>>a;
	if(a==1){cout<<"一个黑色的红眼巨影出现在你面前，将你吞噬了\n";end();return 0;}
	cout<<"你敲了一下门，房间中传来快速的脚步声……\n";
	cout<<"你十分恐惧，心想：是谁在里面？这时你选择：1.逃跑 2.勇敢的走进房间\n";
	cin>>a;
	if(a==1){
		cout<<"你刚要转身逃跑，突然一个黑色的红眼巨影出现在你面前，将你吞噬了\n";
		end();return 0;
	}
	cout<<"你忐忑不安的进了房间，结果里面什么也没有，只是有点破烂\n";
	cout<<"你选择：1.洗澡 2.躺床上睡觉\n";
	cin>>a;
	if(a==1){
		cout<<"你推开洗手间的门，吱呀一声后\n";
		cout<<"一个身姿妖娆的女鬼正在洗澡，红眼瞪着眼前的你，大喊道：你个bt，居然偷看本公主洗澡！\n";
		cout<<"女鬼将你一脚踹飞了……\n";
		Sleep(2000);end();return 0;
	}
	cout<<"你不一会便睡着了……\n";
	Sleep(4000);
	turn;
	slowsay("半夜……\n" , S);
	cout << "你从床上醒来去上厕所，发现床边好像有一个人的影子。\n";
	cout << "你选择：1.过去看看 2.装作没发现\n";
	cin >> a;
	if(a == 1)
	{
		cout << "你快速地爬了过去，发现影子似乎是人画上去的……\n";
		cout << "你感到后背发凉。";
		cout << "你：WC，有人居然有我房间的钥匙！";
		cout << "你刚想躺回床上，却发现根本动不了……\n";
		cout << "你看见一个人走到你的面前。\n";
		cout << "他拿起刀向你砍去。\n";
		cout << "你死了\n";
		end();
		return 0;
	}
	cout << "你小心翼翼地躺回床上继续睡觉。\n";
	cout << "几分钟后，你听见了人走动的声音，随后又消失不见了。\n";
	Sleep(1500);
	slowsay("第二天早晨……\n" , S);
	cout << "你从床上爬起来，心想：我应该做一点武器！\n";
	cout << "你看向房间里的东西，有一根木棍和一些装满水的水瓶，你选择：1.用木棍和水瓶制造木槌 2.只用木棍作为武器\n";
	cin >> a;
	if(a == 2)
	{
		cout << "你立即打消了这个念头：我*，我刚这么蠢？这木棍能有用吗？\n";
	}
	cout << "你喝了所有水瓶里的一半水，你感觉到浑身舒服。\n";
	cout << "你立马开始制作……\n";
	Sleep(2000);
	cout << "呼~你很快就做好了武器：木槌。\n";
	cout << "系统：获得武器：木槌。\n";
	cout << "目前拥有武器：木槌\n";
	cout << "那么，就该逃离这里了！\n" ;
	Sleep(2000);
	turn;
	cout << "\n   第二片段结束，是否开启第三段(1:yes, 0:no)（难度：7星，含战斗）：";
	cin >> a;
	if(!a) return 0;
	
	//未完待续，勿抄... (Sanm_so)
	//我也没写完，勿抄...(Dreamin)
	return 0;
}
/*
我奉劝大家一句，改代码的自己玩玩就好了，不然就算抄袭了
**水印**  By Sanm_so and Dreamin
http://magicoj.com/discuss/view?id=114514（爱信不信）
*/

// answer:
// (1): 3 1 2 2/3 1 2 2 1 1
