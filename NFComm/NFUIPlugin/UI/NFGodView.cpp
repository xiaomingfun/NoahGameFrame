/*
			This file is part of:
				NoahFrame
			https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2019 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang

   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "NFGodView.h"

NFGodView::NFGodView(NFIPluginManager* p, NFViewType vt) : NFIView(p, vt)
{

}

bool NFGodView::Execute()
{
	//1. get all scene from NF
	//2. let the user choose one scene with the group
	//3. get all objects from that group
	//4. draw object by imgui
	//5. show the props and records if the user picked an object
	//6. use can try to change the value of props to trigger the logic block unit to have a test
	return true;
}
