// SPDX-License-Identifier: GPL-2.0+

#include <QWidget>

#include "definitions.h"
#include "settings.h"

#include <QCheckBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QComboBox>


////////////////////////////////////////////////////////////////////////////////
/// \class DsoConfigAnalysisPage                                   configpages.h
/// \brief Config page for the data analysis.
class DsoConfigAnalysisPage : public QWidget {
  Q_OBJECT

public:
  DsoConfigAnalysisPage(DsoSettings *settings, QWidget *parent = 0);

public slots:
  void saveSettings();

private:
  DsoSettings *settings;

  QVBoxLayout *mainLayout;

  QGroupBox *spectrumGroup;
  QGridLayout *spectrumLayout;
  QLabel *windowFunctionLabel;
  QComboBox *windowFunctionComboBox;

  QLabel *referenceLevelLabel;
  QDoubleSpinBox *referenceLevelSpinBox;
  QLabel *referenceLevelUnitLabel;
  QHBoxLayout *referenceLevelLayout;

  QLabel *minimumMagnitudeLabel;
  QDoubleSpinBox *minimumMagnitudeSpinBox;
  QLabel *minimumMagnitudeUnitLabel;
  QHBoxLayout *minimumMagnitudeLayout;
};
