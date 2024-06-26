/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qMINSAppMainWindow_h
#define __qMINSAppMainWindow_h

// MINS includes
#include "qMINSAppExport.h"
class qMINSAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_MINS_APP_EXPORT qMINSAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qMINSAppMainWindow(QWidget *parent=0);
  virtual ~qMINSAppMainWindow();

public slots:
  void on_HelpAboutMINSAppAction_triggered();

protected:
  qMINSAppMainWindow(qMINSAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qMINSAppMainWindow);
  Q_DISABLE_COPY(qMINSAppMainWindow);
};

#endif
