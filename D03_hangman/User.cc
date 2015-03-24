/*
 * Copyright (C) 2011 Emweb bvba, Kessel-Lo, Belgium.
 *
 * See the LICENSE file for terms of use.
 */

#include "User.h"

#include <Wt/Auth/Dbo/AuthInfo>
#include <Wt/Dbo/Impl>

DBO_INSTANTIATE_TEMPLATES(User);

using namespace Wt;
using namespace Wt::Dbo;

User::User()
 : gamesPlayed(0),
 score(0)
{ }
