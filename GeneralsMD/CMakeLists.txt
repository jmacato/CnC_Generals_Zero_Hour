cmake_minimum_required(VERSION 3.25)

project(zerohour LANGUAGES C CXX)

# Do we want to build extra SDK stuff or just the game binary?
option(ZEROHOUR_TOOLS "Build additional tools." OFF) # TODO
add_feature_info(ZeroHourTools ZEROHOUR_TOOLS "Build Zero Hour Mod Tools")

# Add main build targets
add_subdirectory(Code)

feature_summary(WHAT ENABLED_FEATURES DESCRIPTION "Enabled features:")
feature_summary(WHAT DISABLED_FEATURES DESCRIPTION "Disabled features:")
