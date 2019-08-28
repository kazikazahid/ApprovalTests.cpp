// Create with some manual editing of the output of:
//   cd ApprovalTests.cpp
//   find ApprovalTests/ -depth -name \*.h* | sed -e 's/^/#include "/' | sed -e 's/$/"/'

#include "ApprovalTests/ApprovalException.h"
#include "ApprovalTests/Approvals.h"
#include "ApprovalTests/ApprovalWriter.h"
#include "ApprovalTests/integrations/catch/Catch2Approvals.h"
#include "ApprovalTests/CombinationApprovals.h"
#include "ApprovalTests/comparators/ApprovalComparator.h"
#include "ApprovalTests/comparators/TextFileComparator.h"
#include "ApprovalTests/FileApprover.h"
#include "ApprovalTests/GoogleTestApprovals.h"
#include "ApprovalTests/integrations/doctest/DocTestApprovals.h"
#include "ApprovalTests/integrations/google/GoogleConfiguration.h"
#include "ApprovalTests/integrations/google/GoogleCustomizationsFactory.h"
#include "ApprovalTests/namers/ApprovalNamer.h"
#include "ApprovalTests/namers/ApprovalTestNamer.h"
#include "ApprovalTests/namers/DefaultNamerDisposer.h"
#include "ApprovalTests/namers/DefaultNamerFactory.h"
#include "ApprovalTests/namers/ExistingFileNamer.h"
#include "ApprovalTests/namers/NamerFactory.h"
#include "ApprovalTests/namers/SectionNameDisposer.h"
#include "ApprovalTests/namers/SeparateApprovedAndReceivedDirectoriesNamer.h"
#include "ApprovalTests/namers/SubdirectoryDisposer.h"
#include "ApprovalTests/reporters/AutoApproveIfMissingReporter.h"
#include "ApprovalTests/reporters/AutoApproveReporter.h"
#include "ApprovalTests/reporters/BlockingReporter.h"
#include "ApprovalTests/reporters/ClipboardReporter.h"
#include "ApprovalTests/reporters/CombinationReporter.h"
#include "ApprovalTests/reporters/CommandLauncher.h"
#include "ApprovalTests/reporters/CommandReporter.h"
#include "ApprovalTests/reporters/DefaultFrontLoadedReporter.h"
#include "ApprovalTests/reporters/DefaultReporter.h"
#include "ApprovalTests/reporters/DefaultReporterDisposer.h"
#include "ApprovalTests/reporters/DefaultReporterFactory.h"
#include "ApprovalTests/reporters/DiffInfo.h"
#include "ApprovalTests/reporters/DiffPrograms.h"
#include "ApprovalTests/reporters/DiffReporter.h"
#include "ApprovalTests/reporters/FirstWorkingReporter.h"
#include "ApprovalTests/reporters/FrontLoadedReporterDisposer.h"
#include "ApprovalTests/reporters/FrontLoadedReporterFactory.h"
#include "ApprovalTests/reporters/GenericDiffReporter.h"
#include "ApprovalTests/reporters/LinuxReporters.h"
#include "ApprovalTests/reporters/MacReporters.h"
#include "ApprovalTests/reporters/QuietReporter.h"
#include "ApprovalTests/reporters/Reporter.h"
#include "ApprovalTests/reporters/SystemLauncher.h"
#include "ApprovalTests/reporters/WindowsReporters.h"
#include "ApprovalTests/StringWriter.h"
#include "ApprovalTests/SystemUtils.h"
#include "ApprovalTests/utilities/Blocker.h"
#include "ApprovalTests/utilities/FileUtils.h"
#include "ApprovalTests/utilities/FileUtilsSystemSpecific.h"
#include "ApprovalTests/utilities/MachineBlocker.h"
#include "ApprovalTests/utilities/Macros.h"
#include "ApprovalTests/utilities/StringUtils.h"
#include "ApprovalTests/utilities/WinMinGWUtils.h"
#include "ApprovalTests/writers/ExistingFile.h"
