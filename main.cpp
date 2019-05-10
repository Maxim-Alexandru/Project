#include "UI.h"
#include "Dog.h"
#include "Tests.h"
#include <Windows.h>
#include <crtdbg.h>

using namespace std;

int main()
{
	Test::test_dog();
	Test::test_repository();
	Test::test_controller();
	Test::test_validation();
	{
		Repository repo{};
		Dog d1{ "Max", "Bulldog", 2, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fcdn2-www.dogtime.com%2Fassets%2Fuploads%2Fgallery%2Fbulldog-dog-breed-pictures%2F1-threequartersitting.jpg&imgrefurl=https%3A%2F%2Fdogtime.com%2Fdog-breeds%2Fbulldog&docid=q2_vqQdd802x1M&tbnid=YmiGQZQbsBTBJM%3A&vet=10ahUKEwim6OGIiMjhAhUD_aQKHdDLC9QQMwhpKAIwAg..i&w=680&h=453&safe=active&bih=610&biw=1280&q=bulldog&ved=0ahUKEwim6OGIiMjhAhUD_aQKHdDLC9QQMwhpKAIwAg&iact=mrc&uact=8" };
		Dog d2{ "Cooper", "German Shepherd", 2, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12213218%2FGerman-Shepherd-on-White-00.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Fgerman-shepherd-dog%2F&docid=zr2r0feuK-u4KM&tbnid=zKyuUIVlbbqLIM%3A&vet=10ahUKEwiZkMb1icjhAhVkw8QBHUV2DcoQMwhpKAEwAQ..i&w=729&h=486&safe=active&bih=610&biw=1280&q=german%20shepherd&ved=0ahUKEwiZkMb1icjhAhVkw8QBHUV2DcoQMwhpKAEwAQ&iact=mrc&uact=8" };
		Dog d3{ "Buddy", "Beagle", 1, "https://www.google.com/url?sa=i&source=images&cd=&cad=rja&uact=8&ved=2ahUKEwiBsuCDisjhAhWK_qQKHb-QBycQjRx6BAgBEAU&url=https%3A%2F%2Fdogtime.com%2Fdog-breeds%2Fbeagle&psig=AOvVaw0Ezl5Yx4AvHts9mM0_TTid&ust=1555073410394164" };
		Dog d4{ "Oliver", "Pug", 0.5, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12225358%2FPug-On-White-01.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Fpug%2F&docid=jWPpicemWyT5aM&tbnid=aU91cwGlZb15JM%3A&vet=10ahUKEwjs0_OMisjhAhVP-qQKHSH0A9MQMwhtKAQwBA..i&w=729&h=486&safe=active&bih=610&biw=1280&q=pug&ved=0ahUKEwjs0_OMisjhAhVP-qQKHSH0A9MQMwhtKAQwBA&iact=mrc&uact=8" };
		Dog d5{ "Tucker", "Puddle", 2, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fbowwowinsurance.com.au%2Fwp-content%2Fuploads%2F2018%2F10%2Fstandard-poodle-brown-700x700.jpg&imgrefurl=https%3A%2F%2Fbowwowinsurance.com.au%2Fdogs%2Fdog-breeds%2Fpoodle%2F&docid=_p-3LxZz3EeChM&tbnid=fkl_XRHPXkBPmM%3A&vet=10ahUKEwir_9ubisjhAhVCz6YKHRc_Bc4QMwiRASgYMBg..i&w=700&h=700&safe=active&bih=610&biw=1280&q=puddle%20dgo&ved=0ahUKEwir_9ubisjhAhVCz6YKHRc_Bc4QMwiRASgYMBg&iact=mrc&uact=8" };
		Dog d6{ "Bella", "Labrador", 0.3, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12231354%2FLabrador-Retriever-On-White-05.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Flabrador-retriever%2F&docid=LE1TM6YbCTzRWM&tbnid=VRx8lQ7Cto6QxM%3A&vet=10ahUKEwjg3JOnisjhAhXJyKQKHd-9Dh0QMwhoKAEwAQ..i&w=729&h=486&safe=active&bih=610&biw=1280&q=labrador&ved=0ahUKEwjg3JOnisjhAhXJyKQKHd-9Dh0QMwhoKAEwAQ&iact=mrc&uact=8" };
		Dog d7{ "Luna", "Siberian Husky", 4, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12224224%2FSiberian-Husky-On-White-03.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Fsiberian-husky%2F&docid=EFEWcvuitN1IXM&tbnid=ZzDt_8T0-5K0qM%3A&vet=10ahUKEwju8tuwisjhAhXGMewKHZPeDj0QMwhnKAIwAg..i&w=729&h=485&safe=active&bih=610&biw=1280&q=siberian%20husky&ved=0ahUKEwju8tuwisjhAhXGMewKHZPeDj0QMwhnKAIwAg&iact=mrc&uact=8" };
		Dog d8{ "Sophie", "Boxer", 2, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fbowwowinsurance.com.au%2Fwp-content%2Fuploads%2F2018%2F10%2Fboxer-700x700.jpg&imgrefurl=https%3A%2F%2Fbowwowinsurance.com.au%2Fdogs%2Fdog-breeds%2Fboxer%2F&docid=XIEn_ZQakQV_YM&tbnid=BYoYN7_LvFEfJM%3A&vet=10ahUKEwiNm6G6isjhAhVNwqYKHawYC7QQMwhxKAgwCA..i&w=700&h=700&safe=active&bih=610&biw=1280&q=boxer&ved=0ahUKEwiNm6G6isjhAhVNwqYKHawYC7QQMwhxKAgwCA&iact=mrc&uact=8" };
		Dog d9{ "Sadie", "Rottweiler", 0.4, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12224942%2FRottweiler-On-White-10.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Frottweiler%2F&docid=I3l5m22PGBQueM&tbnid=P804ltx8q3VxUM%3A&vet=10ahUKEwi1_JfEisjhAhUP-aQKHTILCiwQMwhnKAAwAA..i&w=729&h=486&safe=active&bih=610&biw=1280&q=rottweiler&ved=0ahUKEwi1_JfEisjhAhUP-aQKHTILCiwQMwhnKAAwAA&iact=mrc&uact=8" };
		Dog d10{ "Lucy", "Chow Chow", 0.6, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fs3.amazonaws.com%2Fcdn-origin-etr.akc.org%2Fwp-content%2Fuploads%2F2017%2F11%2F12234550%2FChow-Chow-Care-500x749.jpg&imgrefurl=https%3A%2F%2Fwww.akc.org%2Fdog-breeds%2Fchow-chow%2F&docid=PdVpa_J4Y-zEKM&tbnid=8CJCAyTcRwLQ_M%3A&vet=10ahUKEwizp43LisjhAhWNyqQKHf-vB3oQMwhrKAIwAg..i&w=500&h=749&safe=active&bih=610&biw=1280&q=chow%20chow&ved=0ahUKEwizp43LisjhAhWNyqQKHf-vB3oQMwhrKAIwAg&iact=mrc&uact=8" };
		Dog d11{ "Charlie", "Bulldog", 3,  "https://www.google.com/imgres?imgurl=https%3A%2F%2Fpreviews.123rf.com%2Fimages%2Fadogslifephoto%2Fadogslifephoto1508%2Fadogslifephoto150800242%2F43621291-an-adorable-english-bulldog-sitting-while-looking-into-the-camera-.jpg&imgrefurl=https%3A%2F%2Fwww.123rf.com%2Fphoto_43621291_an-adorable-english-bulldog-sitting-while-looking-into-the-camera-.html&docid=wReNEn6PGqYpLM&tbnid=q_nLlVvgbntU9M%3A&vet=10ahUKEwiKzfG1oNXhAhWFDuwKHZm-DN0QMwiMASgYMBg..i&w=1300&h=1040&safe=active&bih=610&biw=1280&q=bulldog&ved=0ahUKEwiKzfG1oNXhAhWFDuwKHZm-DN0QMwiMASgYMBg&iact=mrc&uact=8"};
		Dog d12{"Rocky", "Bulldog", 2, "https://www.google.com/imgres?imgurl=https%3A%2F%2Fimg.purch.com%2Fh%2F1000%2FaHR0cDovL3d3dy5saXZlc2NpZW5jZS5jb20vaW1hZ2VzL2kvMDAwLzA4Mi80ODkvb3JpZ2luYWwvZW5nbGlzaC1idWxsZG9nLmpwZw%3D%3D&imgrefurl=https%3A%2F%2Fwww.livescience.com%2F55590-english-bulldog-genetics-health-problems.html&docid=JmlIm0pfxpXjOM&tbnid=AZIXiLu_shMetM%3A&vet=10ahUKEwiKzfG1oNXhAhWFDuwKHZm-DN0QMwitASg5MDk..i&w=1280&h=1000&safe=active&bih=610&biw=1280&q=bulldog&ved=0ahUKEwiKzfG1oNXhAhWFDuwKHZm-DN0QMwitASg5MDk&iact=mrc&uact=8"};
		repo.addDog(d1);
		repo.addDog(d2);
		repo.addDog(d3);
		repo.addDog(d4);
		repo.addDog(d5);
		repo.addDog(d6);
		repo.addDog(d7);
		repo.addDog(d8);
		repo.addDog(d9);
		repo.addDog(d10);
		repo.addDog(d11);
		repo.addDog(d12);
		Controller ctrl{ repo };
		UI ui{ ctrl };
		ui.run();
	}
	system("pause");
	_CrtDumpMemoryLeaks();
	return 0;
}